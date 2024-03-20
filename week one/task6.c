#include<stdio.h>
void main ()
{
    int n , sum=0;

     printf("please enter the num :");
     scanf("%d", & n);

      for(n ; n>0 ; n--)
     sum+=n;
     printf("%d", sum);

}