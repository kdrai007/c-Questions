#!/bin/bash

#taking the input for the filname
buildFile=$1
buildFile_without_extension="${buildFile%.*}"

#script for creating .exe for .cpp file 
g++ $buildFile -o builds/$buildFile_without_extension

#running the script file 
./builds/$buildFile_without_extension

