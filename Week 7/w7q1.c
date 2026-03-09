    #include<stdio.h>

    int calculate ( int n ) {
        
        int number = 1;
        
        while ( n != 1 ){
            if ( n % 2 == 0 ) {
                n = n / 2;
            }
            else {
                
                n = 3 * n + 1;
            }
            number++;
        }
        
        return number;
    }

    int main ( ) {
        
        int i,j;
        
        while ( scanf ( "%d %d", &i  ,&j ) != EOF ){
            
            int start = ( i < j ) ? i : j;
            int end = ( i > j ) ? i : j;
            int max = 0;
            
            for ( int h = start ; h <= end ; h++ ){
                int notmax = calculate ( h );
                
                if ( notmax > max ){
                    max = notmax;
                }
            }
            
            printf( "%d %d %d",i,j,max);
            printf("\n");
        }
        return 0;
    }