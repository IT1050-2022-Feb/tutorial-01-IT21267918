/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//Function declarations
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("Minimum number is %d \n", minimum(no1, no2));
   printf("Maximum number is %d \n", maximum(no1, no2));
   printf("Multiply number is %d \n", multiply(no1, no2));
   return 0;
}

// Find minimum between two numbers.

int minimum(int no1, int no2)
{
    return (no1 > no2 ) ? no2 : no1;
}

//Find maximum between two numbers.

int maximum(int no1, int no2) 
{
    return (no1 > no2 ) ? no1 : no2;
}

//Find the multiply of two numbers
int multiply(int no1, int no2)
{
  return no1*no2;
}