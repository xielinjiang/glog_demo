#!/usr/bin/env bash
if [ ! -d "./build" ]; then
mkdir build
fi
cd build
# rm ../build/* -r
cmake ..
make -j12
./main