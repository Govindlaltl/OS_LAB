echo -n "Enter a number"
read n
fact=1
while [ $n -gt 1 ]; do
	fact=$((fact * n))
	n=$((n - 1))
done
echo "the factorial of the given number is $fact"
