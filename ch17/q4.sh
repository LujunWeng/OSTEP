#!/bin/bash


function measure
{
	local policy=$1
	local order=$2

	for i in {0..9}; do
		(time ./malloc.py -S 2000 -n 500 -H 0 -p $policy -l $order -s 0 -c >/dev/null) 2>&1 | grep real | sed 's/.*m\(.*\)s/\1/';
	done | awk '{ count++; total += $1 } END { print total/count }'
}

for policy in WORST BEST FIRST; do

printf "$policy\t"	
for order in ADDRSORT SIZESORT+ SIZESORT-; do
	printf "$(measure $policy $order)\t"
done
echo 

done
