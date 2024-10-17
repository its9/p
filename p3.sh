#!/bin/sh
file="file.txt"
if [ -r $file ]
then 
echo "read permission"
else 
echo "not read permission"
fi
if [ -w $file ]
then 
echo "write permission"
else
echo "not write permission"
fi
if [ -x $file ]
then 
echo "excute permission"
else
echo "not excute permission"
fi
if [ -w$file ]
then 
echo "write permission"
else
echo "not write permission"
fi
 
