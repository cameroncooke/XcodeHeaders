#!/bin/bash

# Change this path to point to the location of class-dump
CLASS_DUMP_PATH="/usr/local/bin/class-dump"

# Change this path to point to your copy of Xcode, usually it will be at this location unless it's a Beta
FRAMEWORK_PATH="/Applications/Xcode.app/Contents/SharedFrameworks/"

for file in $FRAMEWORK_PATH*.framework; do

      frameworkName=${file##*/}
      frameworkBaseName=${frameworkName%.framework}

      echo "Class dumping $frameworkName..."
      echo
      $CLASS_DUMP_PATH -HI -o ~/Desktop/XcodeDump/$frameworkBaseName $FRAMEWORK_PATH$frameworkName/Versions/A/$frameworkBaseName
      echo
done