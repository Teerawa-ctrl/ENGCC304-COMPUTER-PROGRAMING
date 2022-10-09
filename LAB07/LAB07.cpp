#include<stdio.h>
 int n ; 
    int i ; 
    int cal = 0 ; 

int main(){
    printf( "Input : " ) ;
    scanf( "%d", &n ) ;
    while( n >= 2 )
    {
        i = n ;
        while ( i >= 2 )
        {
            if( cal > 1 ) 
            {
                break;
            }
            if ( n%i == 0 )
            {
                cal++ ;
            }
            i-- ;
        }
        if ( cal <= 1 )
        {
            printf( "%d ", n ) ;
        }
        cal = 0 ;
        n-- ;
    }
}
