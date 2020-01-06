//dweight.case
// calculates the dimensional weight of packages for shipping companies

#include<stdio.h>

int main(void)
{
  int height, length, width, volume;


  height = 8;
  length = 12;
  width = 10;


/*******************************************************************************
printf("Enter height of the box: ");
scanf("%d", &height);

printf("Enter length of box: ");
scanf("%d", &length);

printf("Enter width of box: ");
scanf("%d", &width);
*******************************************************************************/

volume = height * length * width;


  //printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches) : %d\n", volume );
  printf("Dimensional weight (pounds) : %d\n", (volume + 165) / 166 );

  return 0;
}
