#include<stdio.h>

int main ( ) {
    
    while ( 1 ) {

        char Ascii [ 1001 ] = { 0 };
        int count [ 97 ] = { 0 };

        if ( !gets(Ascii)) {
            break;
        }
    
        for ( int i = 0 ; Ascii [ i ] != '\0' ; i ++ ){
            
            if ( Ascii [ i ] != '\0') {

                count [ Ascii [ i ] - 32 ] ++; 
                
            }

        }
        /*
        for (int i = 0; i < 97; i ++) {
            if (count[i])
                printf("char: '%c', count: %d\n", i + 32, count[i]);
        }
        printf("-------------------------\n");
        */
        int Ascii_number [ 97 ] = { 0 };
        
        for ( int i = 0 ; i < 97 ; i ++ ) {
            
            Ascii_number [ i ] = i + 32;
        
        }

        int temp = 0;
        for ( int i = 0 ; i < 97 ; i ++ ) {
            for ( int j = i ; j < 97 ; j ++ ) {
                if ( count [ j ] < count [ i ] || ( count [ j ] == count [ i ] && Ascii_number [ j ] > Ascii_number [ i ] ) ) {
                    
                    temp = count [ j ];
                    count [ j ] = count [ i ];
                    count [ i ] = temp;

                    temp = Ascii_number [ j ];
                    Ascii_number [ j ] = Ascii_number [ i ];
                    Ascii_number [ i ] = temp;
                    
                }
            }
        }
        
        for ( int j = 0 ; j < 97 ; j ++ ) {

            if ( count [ j ] != 0 ) {
                
                printf ( "%d %d\n" , Ascii_number [ j ], count [ j ] );
            
            }
             
        
        }

        printf ( "\n" );

    }
    
    return 0;

}