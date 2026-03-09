int main() {

    init();

    char *str = s1;
    char *key = s2;
    int count;
    //add your code here
    int str_length = 0 , key_length = 0;
    count  = 0;
    for ( int i = 0 ; str[i] != '\0' ; i++ )
        str_length++;
    for ( int i = 0 ; key[i] != '\0' ; i++ )
        key_length++;
    
    for ( int i = 0 ; i <= str_length - key_length ; i++ ) {
        int judge = 0;
        for ( int j = 0 ; j < key_length ; j++ ) {
            if ( str[i + j] != key[j] ) {
                judge = 1;
                break;
            }
        }
        if ( !judge ) 
            count ++; 
    }

    printf ( "%d", count );
    return 0;
}
