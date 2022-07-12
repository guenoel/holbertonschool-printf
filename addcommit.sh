#!/bin/bash
i=0
while [ $i -le 35 ]
do
	echo "a" >> ./README.md
	git add README.md
	git commit -m "carotte"
	sleep 2
	git push
	sleep 2
	((i++))
done
