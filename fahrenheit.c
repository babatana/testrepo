#include<stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
  float fahrenheit, celcius;

  printf("Enter the temp in fahrenheit: ");
  scanf("%f", &fahrenheit);

  printf("Temp in fahrenheit: %.1f\n", fahrenheit);

  celcius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
  printf("celcius equivalent: %.1f\n", celcius);

  return 0;
}
