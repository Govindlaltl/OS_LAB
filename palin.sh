echo "Enter the number"
read num
Nnum=$num
rev=0
while [ $num -gt 0 ];
do
	digit=$(( num % 10))
	rev=$(( rev * 10 + digit ))
	num=$(( num / 10 ))
done
if [ $rev -eq $Nnum ]
then
	echo "the number is plaindrome"
else
	echo "the number is not palindrome"
fi
