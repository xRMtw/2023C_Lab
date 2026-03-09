#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N%3==2&&N%7==5&&N%11==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}