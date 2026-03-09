#include <stdio.h>

//char s[1000];

//void init(){
    //fgets(s, 1000, stdin);
//}

int main() {
  
    init();
    
    char *str = s; 
    int sum;
    //add your code here
    
    int temp = 0;
    
    for ( int i = 0 ; str[i] != '\0' ; i ++ ) {
        
        if ( '0' <= str[i] && str[i] <= '9' ) {
            
            temp *= 10;
            temp += str[i] - 48;
            
        }
        
        else {
            sum = sum + temp;
            temp = 0; 
        }
        
        
    }

    printf("%d", sum);
    return 0;

}
