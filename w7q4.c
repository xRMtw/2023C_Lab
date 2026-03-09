#include<stdio.h>

int main ( ) {

    int n , k;
    scanf ( "%d %d" , &n , &k );

    int die[n];

    for ( int i = 0 ; i < n ; i ++ ) {
        
        die[i] = 1;
    
    }
    
    int count = 0;
    int Nowperson = 0,next = 1;

    while ( ( count + 1 ) != n ) {
        
        next = 0;

        if ( Nowperson >= n -1 ) {
            
            if ( die[ Nowperson = Nowperson - Nowperson ] == 0 ) {
                
                while ( die[ Nowperson + next ] != 0 ) {
                    
                    next ++;
                }
                die[ Nowperson + next ] = 0;
                Nowperson = Nowperson + next +1;
                count ++;
            
            }
            else {
                
                die[ Nowperson - Nowperson ] = 0;
                count ++;
                
                while ( die[ Nowperson - Nowperson + next ] != 0 ) {
                    
                    next ++;
                }
                
                Nowperson = Nowperson - Nowperson + next + 2;
            
            }
            
        }
        else {
        
            if ( die[ Nowperson + k -1 ] != 0 ) {

                die[ Nowperson + k - 1 ] = 0;
                Nowperson +=k;
                count ++;
            }
            
            else {
                while ( die[ Nowperson + k - 1 + next ] == 0 ) {
                    next ++;
                }
                
                die[ Nowperson + k -1 + next ] = 0;
                Nowperson = Nowperson + k - 1 + next + 1;
                count ++;

            }
        
        }
    }
    
    for ( int h = 0 ; h < n ; h ++ ) {

        if ( die[ h ] == 1 ) {
            printf ( "%d" , h + 1 );
        }
    }
    
    return 0;
}