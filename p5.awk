#!/bin/awk -f
BEGIN {print "start"}
{print $1,"\t" ,$2}
END {print "done"}
