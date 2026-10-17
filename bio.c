#include<stdio.h>
int main()
{ 
    char name [50];
    int age;
    char course [50];
    printf("enter your course");
    scanf("%s",course);
    printf("enter your name");
    scanf("%s",name);
    printf("enter your age");
    scanf("%d",&age);
    printf("your name is %s\n",&name);
    printf("your age is %d\n",age);
    printf("your taken course is %s",course);
    return 0;
}
 