#include <stdio.h>

int main()
 {
    int s1,s2,s3,s4,s5,s6;
    float total,average;
    printf("Enter 6 subject marks:");
    scanf("%d,%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5,&s6);
    total = s1+s2+s3+s4+s5+s6;
    average = total/6;
    printf("Total:%2f\n", total);
    printf("Average:%2f\n",average);
    if(average>=90)
    { 
        printf("Grade A\n");
    }
    else if (average>=75)
    { 
        printf("grade B\n");
    }
   else if (average>=60)
   { 
    printf("grade C\n");
   }
   else if (average>=35)
   { 
    printf("grade D\n");
   }
   else
   { 
    printf("grade FAIL\n");
   } 
    return 0;
}