#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int N[n];
    for(int i=0;i<n;i++)
        scanf("%d",&(N[i]));
    int total=0;
    for(int i=0;i<n;i++)
        total+=N[i];
    double averge=0;
    averge=(double)total/n;
    double x_y=0;
    for(int i=0;i<n;i++)
        x_y=x_y+pow(N[i]-averge,2);
    printf("%.2f",sqrt(x_y/n));
    return 0;
}