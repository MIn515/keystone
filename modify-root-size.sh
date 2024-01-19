#!/bin/bash

# file path
FILE_PATH="buildroot/fs/ext2/Config.in"

# 
if [ -f "$FILE_PATH" ]; then
    # 
    sed -i 's/default "60m"/default "600m"/' "$FILE_PATH"
    echo "updata root size"
else
    echo "fault：no $FILE_PATH "
fi
