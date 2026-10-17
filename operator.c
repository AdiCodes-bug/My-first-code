#include<stdio.h>
int main()
{ 
    int a,b;
    char operation;
    printf("enter your first number:");
    scanf("%d",&a);
    printf("enter operation (+,-,*,/):\n");
    scanf("%c",&operation);
    printf("enter second number:");
    scanf("%d",&b);
     if (operation == '+')
       printf("Answer = %.2d\n",a+b);
       else if (operation =='-')
       printf("answer ```````````````````````````````````````````````````= %.2d\n",a-b);
       else if (operation == '*')
       printf("answer =%.2d\n",a*b);
       else if(operation == '/')
       printf("answer =%.2d\n",a/b);
       else 
       printf("invalid operation!\n");
return 0;
}