#include<stdio.h>

int main()
{   
    int mm, dd, yyyy; 

    printf("What is the date today (mm/dd/yyyy): ");
    scanf("%d%d%d", &mm, &dd, &yyyy); 

    printf("You entered the date: %d/%d/%d\n", yyyy, mm, dd); 
    
    return 0; 
}