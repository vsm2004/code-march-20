#include<stdio.h>
int main ()
{
// Initializing the variables
    
int num, count, fact, last_digit, sum = 0, temp;
    
// Taking input from the user
    
printf ("Enter the Number to be checked:\t");
scanf ("%d", &num);

// for loop to compute the factorial of the last digit of the number
for (temp = num; num > 0; num = num / 10)
{
fact = 1;
last_digit = num % 10;
for (count = 1; count <= last_digit; count++)
{
fact = fact * count;
}
sum = sum + fact;
}

// Condition to check whether the number is strong or not 
if (sum == temp)
{
printf ("%d is a Strong number \n\n", temp);
}
else
{
printf ("%d is not a Strong number \n\n", temp);
}
return 0;
}
