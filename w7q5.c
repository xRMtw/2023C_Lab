#include <stdio.h>

int main(){
    
    int pos[10001] = {0}, x, x2, h, Minx = 20000, MAXx = 0, tmp = -1;
    
    while ( scanf("%d %d %d", &x, &h, &x2) != EOF ){
        
        if(x < Minx) Minx = x;
        if(x2 > MAXx) MAXx = x2;
        
        for(int i = x; i < x2; i++) 
            if(h > pos[i]) 
                pos[i] = h;
    }
    
    for(int i = Minx; i <= MAXx; i++){
        
        if(pos[i] != tmp){
            printf("%d %d ", i, pos[i]);
            tmp = pos[i];
        }
    }
}