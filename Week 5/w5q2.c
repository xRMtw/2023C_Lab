#include<stdio.h>

int main(){
    
    int N,n,number,length[51];
    scanf("%d",&N);
    
    for( int k = 0; k < N; k++ ){
        
        number = 0; 
        scanf("%d",&n);
        
        for( int i = 0; i < n; i++ )
            scanf("%d",&(length[i]));
        
        int temp = 0;
        for( int i = 0; i < n-1; i++ ) 
            for( int j = 0; j < n-i-1; j++ ) 
                if( length[j+1] < length[j] ) {
                    
                    number++;
                    temp = length[j];
                    length[j] = length[j+1];
                    length[j+1] = temp;
                
                }
            
        
        printf("Optimal train swapping takes %d swaps.\n",number);
    
        }
    return 0;
}