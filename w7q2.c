#include<stdio.h>
#include<string.h>

int main ( ) {

    char *HowToMove [16];
    char *temp;
    int n;
    if ( n >= 25 || n <= 0 )
        return 0;
    
    /*scanf ( "%d" , &n );*/
    
    while ( gets ( HowToMove) != 'quit' ) {
        
        int Block_Number[n][n];
        
        

        for ( int i = 0 ; i < n ; i ++ ) {
            
            Block_Number[i][0] = i;
            
            for ( int k = 1 ; k < n ; k ++) {
                Block_Number [ i ][ k ] = -1;
            }
        }
        
        temp = strchr ( HowToMove , 'm') ;
        puts ( *temp );
        printf ( "%d\n" , temp );
        puts ( *HowToMove );
        printf ( "%d\n" , HowToMove );
            


        /*puts ( HowToMove);
        for ( int h = 0 ; h < n ; h++) {
           
            for ( int k = 0; k < n ; k++) {
                printf ( "%d ", Block_Number[h][k]);
                 if ( k == n-1 )
                printf ( "\n");
            
            }
            
        }
        */

    }
}