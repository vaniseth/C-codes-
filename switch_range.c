#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the value of x and y");
scanf("%d%d", &x,&y);

printf("Enter the choice of operation 1 to 10 for addition, 11 to 20 for multipliactin, 21 to 30 for remainder\n");
scanf("%d", &z);
printf("your choice %d\n",z);
 switch (z)
{
     case 1 ... 10 :
             printf("\nthe sum of two numbers is %d", x+y);
             break;
     case 11 ... 20 :
             printf("\nthe multiplication of two numbers is %d", x*y);
             break;
     case 21 ... 30 :
             printf("\nthe modulo operation of two numbers is %d", x%y);
             break;
     default :
             printf("\nthe two numbers are %d %d", x,y);
             break;
}
}

