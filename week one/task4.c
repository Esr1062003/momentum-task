#include<stdio.h>
void main ()
{
    int n , f =1;
     printf("please enter the num  :");
     scanf("%d", & n);

     if (n%2==0)
     printf("even\n");
     else
     printf("odd\n");

     for(n ; n>0 ; n--)
     f*=n;
     printf("%d", f);


}