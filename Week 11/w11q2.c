/*************************************************************
function name: convertToDifferentBase
description: Convert a decimal number @dec to the number with different @base and store the result as a string in result
return vaule: Result after convert.
notice: The letter you see in the number should be upper case.
*************************************************************/
#include <stdlib.h>
#include <string.h>
    
char *convertToDifferentBase(int dec, int base, char *result) {
    int count = 0;

    char *Temp = malloc ( sizeof(result) );
    memset ( Temp, 0, sizeof(Temp) );
    
    while ( dec != 0 ) {
        
        int temp = 0;
        temp = dec % base;
        
        result [count] = temp < 10 ? '0' + temp : 'A' +  (temp - 10 );
        dec /= base;
        count ++;
    
    }
    
    for ( int i = count - 1 ; i >= 0 ; i-- ) 
        Temp [count - 1 - i ] = result[i];
    
    return Temp;
}