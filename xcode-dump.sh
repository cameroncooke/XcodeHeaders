#!/bin/bash

# Change this path to point to the location of class-dump
CLASS_DUMP_PATH="class-dump"

# Change this path to point to your copy of Xcode
XCODE_PATH="/Applications/Xcode.app"

# The following variables should not require changing
LIBRARY_FRAMEWORK_PATH=$XCODE_PATH"/Contents/Developer/Library/Frameworks/"
FRAMEWORK_PATH=$XCODE_PATH"/Contents/Frameworks/"
SHARED_FRAMEWORK_PATH=$XCODE_PATH"/Contents/SharedFrameworks/"
PLUGIN_PATH=$XCODE_PATH"/Contents/PlugIns/"


# Class-dump library frameworks
echo
echo "Starting library framework dump..."
echo "----------------------------------"
echo

for file in $LIBRARY_FRAMEWORK_PATH*.framework; do

      name=${file##*/}
      baseName=${name%.framework}

      echo "Class dumping $name..."
      $CLASS_DUMP_PATH -HI -o ~/Desktop/XcodeDump/Developer/Library/Frameworks/$baseName $LIBRARY_FRAMEWORK_PATH$name/Versions/A/$baseName
      echo
done

# Class-dump frameworks
echo "Starting framework dump..."
echo "--------------------------"
echo

for file in $FRAMEWORK_PATH*.framework; do

      name=${file##*/}
      baseName=${name%.framework}

      echo "Class dumping $name..."
      $CLASS_DUMP_PATH -HI -o ~/Desktop/XcodeDump/Frameworks/$baseName $FRAMEWORK_PATH$name/Versions/A/$baseName
      echo
done

# Class-dump shared frameworks
echo "Starting shared framework dump..."
echo "---------------------------------"
echo

for file in $SHARED_FRAMEWORK_PATH*.framework; do

      name=${file##*/}
      baseName=${name%.framework}

      echo "Class dumping $name..."
      $CLASS_DUMP_PATH -HI -o ~/Desktop/XcodeDump/SharedFrameworks/$baseName $SHARED_FRAMEWORK_PATH$name/Versions/A/$baseName
      echo
done

# Class-dump plugins
echo "Starting plugin dump..."
echo "-----------------------"
echo

for file in $PLUGIN_PATH*.ideplugin; do

      name=${file##*/}
      baseName=${name%.ideplugin}

      echo "Class dumping $name..."
      $CLASS_DUMP_PATH -HI -o ~/Desktop/XcodeDump/PlugIns/$baseName $PLUGIN_PATH$name/Contents/MacOS/$baseName
      echo
done