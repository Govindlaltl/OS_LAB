echo "enter the number"
read num
if [ $(( $num % 2 == 0)) ]
then
	echo "the number is even"
else 
	echo "the number is ood"
fi
