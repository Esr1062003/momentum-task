#include<stdio.h>
void main ()
{
    int x , y , z ;
    printf("please enter the num1 :");
     scanf("%d", & x);

     printf("please enter the num2 :");
     scanf("%d", & y);

     printf("please enter the num3 :");
     scanf("%d", & z);

     if (x>y && x>z)
     printf("num1 is the largest");

     else if (y>x && y>z)
     printf("num2 is the largest");

     else
     printf("num3 is the largest");
}

     