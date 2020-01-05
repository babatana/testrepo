#include<stdio.h>

int main()
{
  int x, polynomial;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  //polynomial = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

  // using Horner's method
  polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("The value of the polynomial: %d\n", polynomial);

  return 0;
}
