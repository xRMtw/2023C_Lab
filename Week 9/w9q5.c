int main() {
    
    int *a, *b;
    init(&a, &b);
    
    int sum;
    
    //add your code here
    sum =0;
    int *start , *end;
    start = ( *a > *b ) ? b : a;
    end = ( *a > *b )? a : b;

    for ( int *i = start ; i < end ; i++ ) {
        sum = sum + *i;
    }
    
    printf("%d", sum);
    return 0;
}
