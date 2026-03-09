#include <stdio.h>
#include <ctype.h>

int main() {

    char c;
    int Next = 1;

    while ( ( c = getchar() ) != EOF ) {
        
        if ( Next && isalpha ( c ) ) {
            
            putchar ( toupper ( c ) );
            Next = 0;
            
        } 
        else {
            
            putchar ( c );

            if (c == '.' || c == '!' || c == '?' || c == '\n') {
                
                Next = 1;
            }

            if ( c == '%')
                Next = 0;
        
        }
    }

    return 0;
}
