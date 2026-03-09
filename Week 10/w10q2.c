#include<stdio.h>

typedef struct {
    float x, y;
} Point;

typedef struct {
    Point point;
    float slope;
} Line;

int main ( ) {

    Line Input;
    scanf ( "%f %f %f" , &Input.point.x , &Input.point.y , &Input.slope );
    
    float a,b;
    scanf ( "%f %f" , &a ,&b );
    if ( b - Input.point.y == Input.slope * ( a - Input.point.x ) )
        printf ( "Yes" );
    else
        printf ( "No" );

    return 0; 
}