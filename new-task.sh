#!/bin/bash

# 1. Validation: Must provide an argument
if [ -z "$1" ]; then
    echo "Usage: source setup_env.sh <folder_name>"
    return 1 2>/dev/null || exit 1
fi

FOLDER=$1

# 2. Create directory and files
mkdir -p "$FOLDER"

# Add a basic template to main.cpp if it's empty
if [ ! -s "$FOLDER/main.cpp" ]; then
    cat <<EOF > "$FOLDER/main.cpp"
#include <iostream>

int main() {
    
    return 0;
}
EOF
fi

touch "$FOLDER/input"

# 3. The "cd" part (requires the script to be 'sourced')
cd "$FOLDER"

# 4. Tmux Automation (Neovim handles the splitting)
if [ -n "$TMUX" ]; then
    # If already in tmux: Create a new window and run nvim
    tmux new-window -n "$FOLDER" "nvim -O main.cpp input"
else
    # If NOT in tmux: Start a new session and run nvim
    tmux new-session -s "$FOLDER" "nvim -O main.cpp input"
fi
