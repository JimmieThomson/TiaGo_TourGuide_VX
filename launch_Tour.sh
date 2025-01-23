#!/bin/bash

# Update package index
# pal-stop move_base - Deprecated as it needs to be done on host machine
# Remove the existing directory
sudo rm -rf /opt/pal/gallium/share/pal_navigation_cfg_tiago/
# Copy the new directory
sudo cp -r /home/pal/TiaGo_TourGuide/TiagoTourGuide_ws/src/pal_navigation_cfg_tiago /opt/pal/gallium/share/
# TODO: Please change this file to represent the local files stored in this repo. Otherwise if there is an error later Tiago will not have the ability to see object infront

# TODO: These files being copied need to acually be in the repo and not just copied from the local machine
# !: This will not run unless these are copied to the repo

# Note: mounted drive must be mounted from "/opt/pal/gallium/share/pal_navigation_cfg_tiago/config/base/common/" to /host/pal/common/
sudo cp Inside Tiago/local_costmap_omni.yaml /host/pal/common/local_costmap.yaml
sudo cp Inside Tiago/local_costmap_plugins_omni.yaml /host/pal/common/local_costmap_plugins.yaml 
sudo cp Inside Tiago/local_costmap_omni.yaml /host/pal/common/local_costmap_omni.yaml
sudo cp Inside Tiago/local_costmap_plugins_omni.yaml /host/pal/common/local_costmap_plugins_omni.yaml 
sudo cp Inside Tiago/recovery_behaviors.yaml /host/pal/common/recovery_behaviors.yaml

source ./TiagoTourGuide_ws/devel/setup.bash
roslaunch par_a3 run_all_nodes.launch