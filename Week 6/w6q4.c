#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring ( char *s , char *substring ) {
    
    int n = strlen ( s );
    int start = 0, end = 0;
    int maxLength = 0, currentLength = 0;
    int startIndex = 0;

    int charIndex [ 256 ];

    for ( int i = 0 ; i < 256 ; i ++ ) {
        
        charIndex [ i ] = -1;  
    }

    while ( end < n ) {
        
        if (charIndex [ s [end] ] == -1 || charIndex [ s [ end ] ] < start) {
            
            charIndex [ s [end] ] = end;
            currentLength = end - start + 1;

            if ( currentLength > maxLength ) {
                
                maxLength = currentLength;
                startIndex = start;
            }

            end++;
        } 
        
        else {
            
            start = charIndex [ s [ end ] ] + 1;
        }
    }

    strncpy ( substring , s + startIndex , maxLength );
    substring [ maxLength ] = '\0';

    return maxLength;
}

int main() {
    
    char input[100];
    char substring[100];

    scanf ( "%s" , input );

    int length = lengthOfLongestSubstring ( input , substring );

    printf ( "%s\n" , substring );

    return 0;
}