#! /bin/bash

#Counting total number of arguments

echo "Total number of arguments : $#"

#Reading argument values individually

echo "Arguement 1 value : $1"
echo "Arguement 2 value : $2"
echo "Arguement 3 value : $3"

#Reading argument values using loop
#@ Expands to the positional parameters, starting from one.
#When the expansion occurs within "", each parameter expands to a separate word.
#That is, "$@" is equivalent to "$1" "$2" ... I

for number in "$@"
do
#echo -n: do not output the trailing newline
    echo -n "$number  "
done

#Adding argument values

sum=$(($1+$2+$3))

#print the result
#echo -e exits immediately if the any subcoomand reuturns non zero

echo -e "\nResult of sum = $sum"

#run bash filename.sh the three arguements/ int you want to add
#say bash sum.sh 50 35 15 should give 100
