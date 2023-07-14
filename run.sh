#!/bin/bash

# Check the operating system
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux
    gcc password.c -o password_generator
    ./password_generator
elif [[ "$OSTYPE" == "msys" ]]; then
    # Windows using MSYS/MinGW
    gcc password.c -o password_generator
    start password_generator.exe
else
    echo "Unsupported operating system"
fi
