#include<stdio.h>

int main ( ) {
  
    init ( );
    void *p = &block;
    char* pcur= p;
    printf("%d, %c, %f", *(int *)pcur , *(char *)( pcur + 4 ) , *(float *)( pcur + 5 ));
    
    return 0;

    //void 不適合用來加減
    //轉成1byte的char更適合
    //float 1byte
    //char 1byte
    //int 4bytes

}
