#include<stdio.h>
int main(){
    int n,failstudent=0;
    double averge=0,total=0;
    scanf("%d",&n);
    int N[n];
    for(int i=0;i<n;i++){
        scanf("%d",&(N[i]));
        total+=N[i];
    }
    averge=total/n;
    for(int i=0;i<n;i++){
        if(N[i]<averge){
            failstudent++;
        }
    }
    printf("%d",failstudent);
    return 0;
}