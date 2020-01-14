#include<stdio.h>

int main()
{
    int upc, check; 

    printf("Enter a 11-digit upc number here: ");
    scanf("%d", &upc);

    printf("Enter check digit: ");
    scanf("%d", &check);

    printf("%d\n", upc);
    printf("%d\n", check);


    return 0; 
}