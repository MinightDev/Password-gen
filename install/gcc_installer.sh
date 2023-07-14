#!/bin/bash

# Check the operating system
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux
    if ! command -v gcc &> /dev/null; then
        echo "GCC is not installed. Installing GCC..."
        sudo apt update
        sudo apt install build-essential -y
        echo "GCC has been installed successfully."
    else
        echo "GCC is already installed."
    fi
elif [[ "$OSTYPE" == "msys" ]]; then
    # Windows using MSYS/MinGW
    if ! command -v gcc &> /dev/null; then
        echo "GCC is not installed. Installing GCC..."
        pacman -S --needed base-devel mingw-w64-x86_64-toolchain -y
        echo "GCC has been installed successfully."
    else
        echo "GCC is already installed."
    fi
else
    echo "Unsupported operating system. Please install GCC manually."
    exit 1
fi

