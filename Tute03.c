/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
int i;
int n;
int Sum=0;
  
// Enter no of numbers from keyboard 
printf("Enter no of numbers to calculate the sum : ");
scanf("%d",&n);

//calculate the sum 
for(i=1;i<=n;++i)
{
  Sum = Sum + i ;
}

//print the sum
printf("Sum of the %d numbers = %d",n, Sum);
  
return 0;
}

