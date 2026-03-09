#include<stdio.h>
#include<math.h>

int main () {

    int N;
    scanf ( "%d" , &N );

    int Num [ N ] , PrimeOrNot [ N ];
    for ( int i = 0 ; i < N ; i ++ ) {
        
        scanf ( "%d" , &( Num [ i ] ) );

    }
    
    for ( int i = 0 ; i < N ; i ++ ) {
        
        if ( Num [ i ] == 1 || Num [ i ] == 0 ) {

            PrimeOrNot [ i ] = 0;
        
        }

        else if ( Num [ i ] == 2 ) {
        
            PrimeOrNot [ i ] = 1;

        }
        
        else if ( Num [ i ] != 0 || Num [ i ] != 1 || Num [ i ] != 2) {
            
            for ( int j = 2 ; j < (int) ( sqrt ( Num [ i ] ) ) + 2 ; j ++ ) {
                
                if ( Num [ i ] % j == 0 ) {
                    
                    PrimeOrNot [ i ] = 0;
                    break;;
                }

                else {

                    PrimeOrNot [ i ] = 1;

                }
                
            }

        }    
    }

    int temp = 0;
    for ( int i = 0 ; i < N ; i ++ ) {
        for ( int j = 0 ; j < N - 1 ; j ++ ) {
            
            if ( ( PrimeOrNot [ j + 1 ] == 0 && PrimeOrNot [ j ] == 0 && ( Num [ j + 1 ] < Num [ j ] ) ) || ( PrimeOrNot [ j + 1 ] == 1 && PrimeOrNot [ j ] == 1 && ( Num [ j + 1 ] > Num [ j ] ) ) || 
                ( PrimeOrNot [ j + 1 ] == 1 && PrimeOrNot [ j ] == 0 )  ) {
                
                temp = Num [ j ];
                Num [ j ] = Num [ j + 1 ];
                Num [ j + 1 ] = temp;

                temp = PrimeOrNot [ j ];
                PrimeOrNot [ j ] = PrimeOrNot [ j + 1 ];
                PrimeOrNot [ j + 1 ] = temp;
            
            }

        }
    }
    
    for ( int i = 0 ; i < N ; i ++ ) {

        printf ( "%d " , Num [ i ] );
        /*printf ( "%d\n" , PrimeOrNot [ i ] );*/

    }

    return 0;

}