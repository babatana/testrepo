#include<stdio.h>

int main()
{
  int total, twenties, tens, fives, ones;

  printf("Enter the amount of money you need to pay: ");
  scanf("%d", &total);

  twenties = total / 20;
  tens = (total - (twenties * 20)) / 10;
  fives = (total - (twenties * 20) - (tens * 10)) / 5;
  ones = (total - (twenties * 20) - (tens * 10) - (fives * 5)) / 1;

  printf("$20 dollar bills: %d\n", twenties);
  printf("$10 dollar bills: %d\n", tens);
  printf("$5 dollar bills: %d\n", fives);
  printf("$1 dollar bills: %d\n", ones);

  return 0;
}
