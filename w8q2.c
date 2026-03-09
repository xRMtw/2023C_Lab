#include<stdio.h>

int main ( ) {

    int n;
    scanf ( "%d" , &n );
    int Maze[n+2][n+2];
    
    for ( int i = 1 ; i < n + 1 ; i++ ) {
        for ( int j = 1 ; j < n + 1 ; j++ ) {
            scanf ( "%d" , &Maze[i][j]);
        }
    }

    for ( int i = 0 ; i < n + 2 ; i++ ) Maze[i][0] = 1;
    for ( int i = 0 ; i < n + 2 ; i++ ) Maze[0][i] = 1;
    for ( int i = 0 ; i < n + 2 ; i++ ) Maze[i][n+1] = 1;
    for ( int i = 0 ; i < n + 2 ; i++ ) Maze[n+1][i] = 1;

    
    
    /*for ( int i = 0 ; i < n + 2 ; i++ ) {
        for ( int j = 0 ; j < n + 2 ; j++ ) {
            printf ( "%d " , Maze[i][j] );
            if ( j == n + 1 ) printf ("\n");
        }
    }*/

    return 0;
}