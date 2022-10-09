#include<stdio.h>
#include<string.h>

char word[ 100 ] ;
int i , count ;

int main() {

    printf( "Input : " ) ;
    gets( word ) ;

    count = strlen( word ) ;
    
    printf( "Result : " ) ;

    i = count ;
    while( i >= 0 ) {
        printf( "%c" , word[i] ) ;
        i-- ; 
    } // end for
    return 0 ;
} // end FN
