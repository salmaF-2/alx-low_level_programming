#!/bin/bash
files_c=$(find . -type f -name "*.c")
files_o=""
for file in $files_c; do
	filename=$(basename "$file" .c)
	
	gcc -c "$file" -o "$filename.o"
	files_o+=" $filename.o"
done

gcc -shared -o liball.so $files_o

rm -f *.o
