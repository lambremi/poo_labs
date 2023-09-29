#!/bin/bash
for file in `find . -type f -name *.h -o -name *.c -o -name *.hpp -o -name *.cpp`
do 
	astyle --style=kr --style=attach -n $file; 
done;

