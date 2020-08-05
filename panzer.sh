for((i = 1; i<= 1000;i++)); do
	#echo $i 
	./gen $i > in1
	./lazySol < in1 > out1
	./mySol < in1 > out2
	#cmp -s out1 out2 || echo no break
	
	red=`tput setaf 1`
	green=`tput setaf 2`
	reset=`tput sgr0`
	#echo "${red}red text ${green}green text${reset}"
	#echo $i "${green}YES ${reset}"
	#echo $i "${red}NO ${reset}"
	
	if cmp out1 out2; then
		echo $i "${green}YES ${reset}"
	else
		echo $i "${red}NO ${reset}"
		break
	fi
	
	#diff -w out1 out2 > /dev/null;REPLY=$?
	#if [ ${REPLY} -eq 0 ]
	#then
		#echo "Files are identical"
	#else
		#echo "Files are different"
	#fi
done;
