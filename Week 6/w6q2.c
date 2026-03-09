#include<stdio.h>

int main(){

    int N;

    scanf( "%d" , &N );


    if ( N > 2147483647 ) {

        return 0;

    }

    int count = 0;
    int test = N; 
    while ( test != 0 ) {
        
        count ++;
        test /= 2;

    }
    
    int A [ count ];

    for ( int i = 0 ; i < count ; i ++ ) {

        A [ i ] = N % 2;
        N /= 2;

    }
    
    for ( int i = count - 1 ; i > -1 ; i -- ) {

        printf ( "%d" , A [ i ] );
         
    }

    return 0;

}