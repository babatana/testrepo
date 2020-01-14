//Question 1

#include<stdio.h>

int main()
{
    int num, one, two; 

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num); 
    printf("The result is: %d%d\n", num%10, num/10);    /*n%10 is the last digit and n/10 is n with the last digit removed. for a two-digit number*/


    return 0; 
}