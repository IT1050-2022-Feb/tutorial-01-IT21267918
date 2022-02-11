/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum;
  float average;

  //Enter marks of two subjects
  printf("Enter marks of subject 1 : ");
  scanf("%d",&mark1);

  printf("Enter marks of subject 2 : ");
  scanf("%d",&mark2);

  //Calculate total and average
  sum = mark1 + mark2;
  average = sum/2.0;

  //Print the result
  printf("The average is %.2f\n",average);
  
  return 0;
}

