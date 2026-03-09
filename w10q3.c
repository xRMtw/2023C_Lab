// #include <stdio.h>
// #include <math.h>

// typedef struct {
    
//     char integer[1000];
//     char decimal[1000];

// } DeciVar;

// int main() {
    
//     DeciVar n;
//     scanf("%s %s" , &n.integer ,&n.decimal );
//     double sum = 0;
//     long double Num1 = 0 ,Num2 = 0;
    
//     int i = 0;
//     for ( i = 0 ; n.integer[i] != '.' ; i++ ) {
//         Num1 *=10;
//         Num1 = Num1 + ( n.integer[i] -'0' );
        
//     }
    
//     for ( int j = i + 1 ; n.integer[j] != '\0' ; j++ ) {
        
//         Num1 = Num1 + ( n.integer[j] -'0' )*pow(0.1 , j - i);

//     }

//     int h = 0;
//     for ( h = 0 ; n.decimal[h] != '.' ; h++ ) {
//         Num2 *=10;
//         Num2 = Num2 + ( n.decimal[h] -'0' );
        
//     }
    
//     for ( int j = h + 1 ; n.decimal[j] != '\0' ; j++ ) {
        
//         Num2 = Num2 + ( n.decimal[j] - '0' )*pow(0.1 , j - h);

//     }
//     sum = Num1+ Num2;
//     printf( "%.0lf" ,sum);
// }   


#include <stdio.h>
#include <math.h>
#include<string.h>

typedef struct {
    
    char integer[1000];
    char decimal[1000];

} DeciVar;

int main() {
    
    DeciVar n;
    scanf("%s %s" , &n.integer ,&n.decimal );

    int intlong = 0 , declong = 0;
    for ( int i = 0 ; n.integer[i] != '.' ; i++ ) {
        intlong++;
    }
    for ( int i = 0 ; n.decimal[i] != '.' ; i++ ) {
        declong++;
    }

    int intlong2 = 0,declong2 = 0;
    for ( int i = intlong + 1 ; n.integer[i] != '\0' ; i++ ) {
        intlong2++;
    }
    for ( int i = declong + 1 ; n.decimal[i] != '\0' ; i++ ) {
        declong2++;
    }
    
    int Maxlong = ( intlong > declong )? intlong : declong;
    int minlong = ( intlong2 < declong2 )? intlong2 : declong2;

    char Newint[ Maxlong + minlong + 3 ] , Newdec[ Maxlong + minlong + 3];
    memset ( Newint , 0 , sizeof(Newint) );
    memset ( Newdec , 0 , sizeof(Newdec) );
    for ( int i = Maxlong - intlong ; Newint[i] != '\0' ; i++ ) {
        if ( i == 0 ) {
            Newint[i] = n.integer[i];
        }
        else {
            Newint[i - 2 ] = n.integer[i];
        }
    }
    if ( Maxlong - intlong2 == 0 ) {
        for ( int i = Maxlong - intlong2 ; Newint[i] != '\0' ; i++ )
            Newdec[i] = n.decimal[i];
    }
    else {
        for ( int i = Maxlong - intlong2 ; Newint[i] != '\0' ; i++ ) 
            Newdec[i] = n.decimal[i];
    }
    
}