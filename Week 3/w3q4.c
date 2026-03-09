#include<stdio.h>
int main(){
    int a,i=0,j=0,k=0,l=0;
    scanf("%d",&a);
        i=a%10;
        a/=10;
        j=a%10;
        a/=10;
        k=a%10;
        a/=10;
        l=a%10;
    if(i==4||j==4||k==4||l==4){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}