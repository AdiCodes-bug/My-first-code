#include<stdio.h>
int main ()
{ 
    int Grade;
    printf("Enter great number(1-4):");

    scanf("%d",&Grade);
    switch(Grade)
    { 
        case 1:        
        printf("grade A");
        break;
        case 2:
        printf("grade B");
        break;
        case 3:
        printf("grade C");
        break;
        case 4:
        printf(" gread D");
        break;
        default:
        printf("Invalid day number");
    }
return 0;
}