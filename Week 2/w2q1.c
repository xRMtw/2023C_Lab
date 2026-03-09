#include<stdio.h>
int main(){
    float a,b;
    b=0;
    scanf("%f",&a);
    b=(int)(a*100);
    printf("%.2f\n%.2f",a,b/100);
    return 0;
}
