#include<stdio.h> 
int main ()
{
    float n1 , n2 ;
    char operator ;

    printf ("please enter num 1 :");
    scanf ("%f", & n1);

    printf ("please enter num 2 :");
    scanf ("%f", & n2) ;

    printf ("please enter operator :");
    scanf (" %c", &operator) ;

    
    switch (operator)
    {
        case '+' :printf("%f + %f =  %f " , n1 ,n2 , (n1+n2));
        break;

        case '-' :printf("%f - %f =  %f " , n1 ,n2 , (n1-n2));
        break;

        case '*' :printf("%f * %f =  %f " , n1 ,n2 , (n1*n2));
        break;

        case '/' :printf("%f / %f =  %f " , n1 ,n2 , (n1/n2));
        break;


    }
    return 0 ;
}