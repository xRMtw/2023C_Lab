#include<stdio.h>
int main(){
    int KM;
    scanf("%d",&KM);
    if(KM<=200){
        printf("%0.f",KM*1.2);
    }
    else{
        printf("%0.f",(KM-200)*0.9+200*1.2);
    }
    return 0;
}