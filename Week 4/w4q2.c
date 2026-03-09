#include<stdio.h>
int main(){
    int n,total=0;
    scanf("%d",&n);
    if(n>6){
        int N[n];
        for(int i=0;i<n;i++)
            scanf("%d",&(N[i]));
 
        int temp = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if( N[j] < N[i] ) {
                    temp = N[j];
                    N[j] = N[i];
                    N[i] = temp;
                }
            }
        }
        for(int i=3;i<(n-3);i++)
            total+=N[i];
        printf("%.2lf",(double)total/(n-6));   
    }
    else
        return 0;
    return 0;
}