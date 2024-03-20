#include<stdio.h> 
int main ()
{
    int num , bit ;
    printf("please enter the number: ");
    scanf("%d", & num);
    printf("\n enter the bit to be claered : ");
     scanf("%d", & bit);
     num &= ~(1 << bit);
      printf("the number after clearing the bit: %d", num);

    return 0 ;
}