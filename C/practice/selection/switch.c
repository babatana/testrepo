#include<stdio.h>

int main()
{
    int expr; 

    printf("enter a number between 1 and 4: ");
    scanf("%d", &expr); 

    switch (expr) {
        case 1: printf("another 1\n");
        break; 
        case 2: printf("from the top, take 2!\n"); 
        break; 
        case 3: printf("three little birds\n");
        break;
        case 4: printf("turn down 4 what?!\n");
        break; 
        default: printf("aint no thing\n");
        break; 
    }
    return 0;
}