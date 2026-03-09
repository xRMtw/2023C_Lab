#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>c&&c>b){
        printf("overlay");
    }
        else if(a<c&&c<b){
            printf("overlay");
    }
        else if(a<d&&d<b){
            printf("overlay");
    } 
        else if(a>d&&d>b){
            printf("overlay");
    }
        else if(c>a&&a>d){
            printf("overlay");
    }
        else if(c<a&&a<d){
            printf("overlay");
    }
        else if(c>b&&b>d){
            printf("overlay");
    }
        else if(c<b&&b<d){
            printf("overlay");
    }
    else{
        printf("no overlay");
    }
    return 0;
}