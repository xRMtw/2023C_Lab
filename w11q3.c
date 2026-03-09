#include <stdio.h>
#include <string.h>

void generateNextTerm(char *prev, char *next) {
    int len = strlen(prev);
    int count = 1;

    for (int i = 1; i <= len; i++) {
        if (prev[i] == prev[i - 1]) {
            
            count++;
        
        } else {

            sprintf(next + strlen(next), "%d%c", count, prev[i - 1]);
            count = 1;
        }
    }
}

void generateLookAndSay(int N, char *current) {
    
    if (N == 0) {
        return;
    }

    printf("%s\n", current);

    char next[2 * strlen(current)]; 
    next[0] = '\0'; 

    generateNextTerm(current, next);

    generateLookAndSay(N - 1, next);
}

int main() {
    int N;

    scanf("%d", &N);

    generateLookAndSay(N, "1");

    return 0;
}
