#include<stdio.h>
#include <string.h>

int main ( ) {

    int row , col , count;

    scanf ( "%d %d %d" , &row , &col , &count );

    int Matrix[row][col];    
    int t = 0;

    memset ( Matrix , 0 , sizeof(Matrix) );

    while ( t < count ) {
        
        t ++;
        int x , y , value;
        scanf ( "%d %d %d" , &x , &y ,&value );
        Matrix [ x ][ y ] = value;

    }

    for ( int i = 0 ; i < row ; i ++ ) {
        for ( int j = 0 ; j < col ; j ++ ) {
            printf ( "%d " , Matrix[i][j] );
            if ( j == col - 1) printf ( "\n" ); 
        }
    }
    
    
}