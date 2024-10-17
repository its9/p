#!/bin/sh
a=12
b=2
c=14
val=`expr $a + $b`
echo "sum=$val"
val=`expr $a - $b`
echo "diff=$val"
val=`expr $a / $b`
echo "qutiont=$val"
val=`expr $a \* $b`
echo "product=$val"
if [ $a -eq $b ];
then
echo "equal"

else
echo "not equal "
fi
if [ $a != $b ];
then
echo "not equal"
else 
echo "equal"
fi
if [ $a -gt 10 -o $b -lt 20 ]   
then
echo “true”
else
echo “false”
fi

if [ $a -lt 10 -a $b -gt 20 ]   
then
echo “True”
else
echo “False”
fi
