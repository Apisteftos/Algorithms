#! /bin/bash



make

if [$? -eq 0];
then
    echo "Compiling the programm"

    ./main

else
    echo "Failed to compile. Exiting."
    echo
fi