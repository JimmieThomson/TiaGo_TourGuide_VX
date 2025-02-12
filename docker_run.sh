#!/bin/bash

pal-stop move_base

docker run -it --rm \
    --device /dev/snd \
    --group-add audio \
    --env="DISPLAY" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    --volume="/opt/pal/gallium/share/pal_navigation_cfg_tiago/config/base/common/:/host/pal/common/" \
    --publish-all \
    --name TiagoTourGuide \
    tiagodocker:latest

wait 5

pal-start move_base