#!/bin/bash

# file path
FILE_PATH="buildroot/fs/ext2/Config.in"

# 
if [ -f "$FILE_PATH" ]; then
    # 
    sed -i 's/"60M"/"256M"/' "$FILE_PATH"
    echo "updata root size"
else
    echo "fault：no $FILE_PATH "
fi
