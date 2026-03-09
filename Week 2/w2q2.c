#include<stdio.h>
int main(){
    int a,i;
    i=0;
    scanf("%d",&a);
    while (a!=0){
        i=a%10;
        a/=10;
        printf("%d",i); 
    }    
return 0;
}