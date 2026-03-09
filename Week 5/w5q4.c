#include <stdio.h>
#include <stdlib.h>

int compare ( const void *a , const void *b ) {
    return ( * ( int * ) a - * ( int * ) b );
}

int main ( ) {

    int t;

    while ( scanf ( "%d" , &t ) != EOF ) {

        int * a = ( int * ) malloc ( t * sizeof ( int ) );
    
        
        for ( int i = 0 ; i < t ; i ++ ) {
            scanf ( "%d", &( a [ i ] ) );
        }

        qsort ( a , t , sizeof ( int ) , compare );

        int mid1, mid2;
        mid1 = a [ ( t - 1 ) / 2 ];
        mid2 = a [ t / 2 ];

        int n = 0;
        for ( int i = 0 ; i < t ; i++ ) {
            if ( a [ i ] == mid1 || a [ i ] == mid2 ) {
                n ++;
            }
        }

        printf ( "%d %d %d\n" , mid1 , n , ( mid2 - mid1 + 1 ) );

        free ( a );

    }

    return 0;
}