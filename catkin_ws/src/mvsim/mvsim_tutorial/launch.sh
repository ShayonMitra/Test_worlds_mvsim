#!/bin/bash

# Prompt for environment type
echo "Enter the environment type (office or warehouse):"
read environment

# Validate environment type
if [[ "$environment" != "office" && "$environment" != "warehouse" ]]; then
    echo "Invalid environment type. Please enter 'office' or 'warehouse'."
    exit 1
fi

# Prompt for world number
echo "Enter the world number (1 or 2):"
read world_number

# Validate world number
if [[ "$world_number" != "1" && "$world_number" != "2" ]]; then
    echo "Invalid world number. Please enter 1 or 2."
    exit 1
fi

# Prompt for number of bots
echo "Enter the number of bots (4, 10, or 20):"
read bot_number

# Validate bot number
if [[ "$bot_number" != "4" && "$bot_number" != "10" && "$bot_number" != "20" ]]; then
    echo "Invalid number of bots. Please enter 4, 10, or 20."
    exit 1
fi

# Generate the world file path based on the environment type
script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
if [[ "$environment" == "office" ]]; then
    world_file="$script_dir/demo_office${world_number}_${bot_number}bots.world.xml"
else
    world_file="$script_dir/demo_warehouse${world_number}_${bot_number}bots.world.xml"
fi

# Check if the file exists
if [[ ! -f "$world_file" ]]; then
    echo "World file not found: $world_file"
    exit 1
fi

# Replace the world_file argument and launch the ROS launch file
echo "Launching simulation with world file: $world_file"
roslaunch mvsim demo_warehouse.launch world_file:="$world_file"
