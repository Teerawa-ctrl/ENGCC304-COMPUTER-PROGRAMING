#include<stdio.h>
#include<string.h>

char word[ 100 ] ;
int i , count ;

int main() {
	
    printf( "Input : " ) ;
    gets( word ) ;

    count = strlen( word ) ;
    
    printf( "Result : " ) ;

    for( i = count ; i >= 0 ; i-- ) {
        printf( "%c" , word[i] ) ;
    } //end if	
    return 0 ;
} //end fN
