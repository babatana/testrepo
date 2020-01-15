#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

//if the grade entered is below 0 or above 100
  if (grade < 0 || grade > 100) {
    printf("Illegal grade\n");
    return 0;
  }

  switch (grade / 10) {                /*dividing by 10 means you only check for the tens, that is the 90s, 60s etc. NO need to lay them all out*/
    case 10:
    case 9:  printf("Letter grade: A\n");
             break;
    case 8:  printf("Letter grade: B\n");
             break;
    case 7:  printf("Letter grade: C\n");
             break;
    case 6:  printf("Letter grade: D\n");
             break;
    case 5:                             //no break means that the program ignores the next case label 
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:  printf("Letter grade: F\n");
             break;
  }

  return 0;
}