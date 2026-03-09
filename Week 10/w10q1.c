#include<stdio.h>

typedef struct {
        
        char studentID[20];
        int programming, programmingLab, calculus;
    
    } Student;

int compare ( const void *a , const void *b ) {
    return (*(Student*)b).programming + (*(Student*)b).programmingLab + (*(Student*)b).calculus
         - (*(Student*)a).programming - (*(Student*)a).programmingLab - (*(Student*)a).calculus;
}

int main ( ) {

    int N;
    

    scanf ( "%d" , &N );
    Student stud[N];
    
    for ( int i = 0 ; i < N ; i ++ ) {
        scanf ( "%s %d %d %d" , &stud[i].studentID , &stud[i].programming , &stud[i].programmingLab , &stud[i].calculus );
    }

    qsort ( stud , N ,sizeof( Student ) , compare );
    
    for ( int i = 0 ; i < 3 ; i ++ ){
        printf ( "%s\n" , stud[i].studentID );
    }

    return 0;
}
