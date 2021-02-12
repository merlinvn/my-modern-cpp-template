#!/bin/bash

rm -rf build
PROJECT_DIR=$PWD
mkdir build && cd build

cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

ln -sf $PWD/compile_commands.json $PROJECT_DIR
