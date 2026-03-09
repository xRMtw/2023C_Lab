#include<stdio.h>
#include <string.h>

int main(){

    while (1) {
        
        char num[1001] = {} ;
        scanf("%s", num);
            
        if ( num[0] == '0' )
            break;

        int even = 0;
        for( int i = 0; i < strlen(num); i += 2)    
            even = num[i]- '0' + even;
        
        int odd = 0;
        for( int i = 1; i < strlen(num); i += 2)       
            odd = num[i] - '0' + odd;
        
        if( (odd-even) % 11 == 0 )
            printf("%s is a multiple of 11.\n",num);
        
        else
            printf("%s is not a multiple of 11.\n",num);
        
        }
    return 0;
}