/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  printf("Enter marks of two subjects: ");
  scanf("%d %d",&mark1,&mark2);
  int sum = mark1 + mark2;
  float average = sum / 2;
  printf("Average is %.2f",average);
  
  
  return 0;
}

