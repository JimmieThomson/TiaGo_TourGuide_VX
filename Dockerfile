FROM osrf/ros:noetic-desktop-full-focal

LABEL maintainer="James Thomson <s3947963@student.rmit.edu.au>"

RUN apt-get update && apt-get install -y --no-install-recommends \
    apt-utils \
    libv4l-dev \
    libv4l2rds0 \
    git \
    wget \
    vim \
    locales \
    dpkg \
    ssh \
    curl \
    aptitude \
    g++ \
    gcc \
    openvpn \
    gnupg \
    bash-completion \
    vim-gtk3 \
    nano \
    psmisc \
    ccache \
    gdb \
    qtcreator \
    htop \
    man \
    meld \
    silversearcher-ag \
    terminator \
    tig \
    valgrind \
    iputils-ping \
    ipython3 \
    python-is-python3 \
    python3-scipy \
    python3-wstool \
    python3-networkx \
    python3-pip  \
    python3-vcstool \
    python3-rosinstall \
    python3-catkin-tools \
    ros-noetic-actionlib-tools \
    ros-noetic-moveit-commander \
    ros-noetic-pointcloud-to-laserscan \
    ros-noetic-move-base-msgs \
    libasound2-dev \
    portaudio19-dev \
    && rm -rf /var/lib/apt/lists/* \
    && pip install azure-cognitiveservices-speech \
    python-dotenv \
    openai \
    playsound \
    simpleaudio \
    && pip3 install pyaudio==0.2.9 --upgrade

RUN bash -c "source /opt/ros/noetic/setup.bash"

# Clone the repo
RUN git clone https://github.com/JimmieThomson/TiaGo_TourGuide.git

WORKDIR /TiaGo_TourGuide

WORKDIR /TiaGo_TourGuide/TiagoTourGuide_ws/
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash && catkin clean -y && catkin build"
WORKDIR /TiaGo_TourGuide/

# Set the entrypoint
ENTRYPOINT ["/bin/bash", "-c", "./launch_Tour.sh"]