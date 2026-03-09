#include<stdio.h>

void MatrixSpiralForm ( int row , int col , int (*Matrix)[row][col] ) {

    int ingrow = 0 , ingcol = 0 , i;
    
    while ( ingrow < row && ingcol < col ) {
        
        for ( i = ingcol ; i < col ; i ++ ) {
            printf ( "%d " , (*Matrix)[ingrow][i]);
        }
        
        ingrow ++;
        
        for ( i = ingrow ; i < row ; i ++ ) {
            printf ( "%d " , (*Matrix)[i][col -1]);
        }

        col --;

        if ( ingrow < row ) {
            for ( i = col - 1; i >= ingcol ; --i ) {
                printf("%d ", (*Matrix)[row - 1][i]);
            }
            row--;
        }

        if ( ingcol < col ){
            for ( i = row - 1 ; i >= ingrow ; --i ) {
                printf("%d ", (*Matrix)[i][ingcol] );
            }
            ingcol++;
        }
    
    }

}

int main ( ) {

    int row , col;
    scanf ( "%d %d" , &row , &col );

    int Matrix[row][col];
    for ( int i = 0 ; i < row ; i ++ ) {
        for ( int j = 0 ; j < col ; j ++ ) {

            scanf ( "%d" , &Matrix[i][j]);
        }
    }
    MatrixSpiralForm ( row , col , &Matrix );
    
    return 0;
}