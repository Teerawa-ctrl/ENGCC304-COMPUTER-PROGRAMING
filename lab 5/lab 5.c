#include<stdio.h>


int main (){

    int years;

     printf("  In put years ") ;
     scanf("%d", &years) ;

     if ( years % 4 == 0 ) {
        if ( years % 400 == 0)
            printf (" feb 29 days ");
        else if ( years % 100 == 0) 
            printf(" feb 28 days");
        else
            printf (" feb 29 days");

     }
     else 
        printf (" feb 28 days ");

    return 0 ;
}