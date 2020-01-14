#include<stdio.h>

int main() 
{
    int oct; 

    printf("enter a number between 0 and 32767: ");
    scanf("%d", &oct);

    printf("In octal, your number is: %d%d%d%d%d\n", ((((oct/8)/8)/8))%8, (((oct/8)/8)/8)%8, ((oct/8)/8)%8, (oct/8)%8, (oct%8));
    
    return 0; 
}

