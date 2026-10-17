#include<stdio.h>
int main ()
{ 
    int age; 
    printf("enter your age");
    scanf("%d",&age);
    if (age>=18)
    {
    printf("you have eligibility for vote");
    } 
    else 
    {
    printf("you have no eligibility for vote ");
    }
    return 0;
}