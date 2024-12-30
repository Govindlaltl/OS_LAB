echo "Enter num 1"
read n
echo "Enter num 2"
read n2
echo "1)addition"
echo "2)subtraction"
echo "3)multiplication"
echo "4)division"
echo "enter the choice: "
read c
case $c in
1)echo "$(( n + n2))";;
2)echo "$(( n - n2))";;
3)echo "$(( n * n2))";;
4)echo "$(( n / n2))";;
*)echo "invalid choice";;
esac
