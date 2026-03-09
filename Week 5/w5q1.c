#include<stdio.h>

void sort ( int h , int N , int arr [ N ] ) {

    int temp = 0 ;
                    
    temp = arr [ h + 1 ] ;
    arr [ h + 1 ] = arr [ h ];
    arr [ h ] = temp;

}


int main ( ) {

    while ( 1 ) {

        int N , M ;

        scanf ( "%d %d" , &N , &M );
        printf ( "%d %d\n" , N , M );
        
        int arr [ N ];
        
        if ( N == 0 && M == 0 ) {
            
            printf ( "%d %d" , N , M );
            break;  
        
        }

        if (  0 > N || N > 10000 || 0 > M || M > 10000 ) {
            
            return 0;
        
        }
        
        for ( int i = 0 ; i < N ; i ++ ){
            
            scanf ( "%d" , &( arr [ i ] ) );
        
        }

        

        for ( int i = 0 ; i < N ; i ++ ) {
            for ( int h = 0 ; h < N - 1 ; h ++ ) {
            
                if ( arr [ h + 1 ] % M < arr [ h ] % M ) {
                    sort ( h , N , arr );
    
                }
                else if ( ( arr [ h + 1 ] % M == arr [ h ] % M ) && arr [ h + 1 ] % 2 && arr [ h + 1 ] > arr [ h ] ) {
                    sort ( h , N , arr  );

                }
        
                else if ( ( arr [ h + 1 ] % M == arr [ h ] % M ) && ( arr [ h + 1 ] % 2 && !( arr [ h ] % 2 ) ) ) {
                    sort ( h , N , arr );
                
                }
        
                else if ( ( arr [ h + 1 ] % M == arr [ h ] % M ) && !( arr [ h + 1 ] % 2 ) && arr [ h + 1 ] < arr [ h ] ) {
                    sort ( h , N , arr );
                
                }
            }

        }

        for ( int i = 0 ; i < N  ; i ++ ){        
            
            printf ( "%d\n" , arr [ i ] );
        
        }     

    }
    
    return 0;
}

/*
int compare(int a, int b, int M)
{
    if (a%M < b%M)
        return 1;
    if ((a%M == b%M) && a%2 && a > b)
        return 1;
    if ((a%M == b%M) && (a%2 && !(b%2)))
        return 1;
    if ((a%M == b%M) && !(a%2) && a < b)
        return 1;
    return 0;
}

int main()
{   
    int N, M;

    while (1) {

        scanf("%d%d", &N, &M);
        if (!N && !M) break;

        int arr[N];

        for (int i=0; i<N; i++)
            scanf("%d", &arr[i]);
        printf("%d %d\n", N, M);

        for (int i=0; i<N; i++) {
            for (int h=0; h<N-1; h++) {
                if (compare(arr[h + 1], arr[h], M)) {
                    arr[h] ^= arr[h + 1];
                    arr[h + 1] ^= arr[h];
                    arr[h] ^= arr[h + 1];            
                }
            }
        }

        for (int i=0; i<N; i++)
            printf("%d\n", arr[i]);

    }
    printf("0 0\n");
    return 0;
}
*/