#include <stdio.h>

int main() {
    
    char Chessboard[19][19];
    for ( int i = 0; i < 19; i++ ){
        for ( int j = 0; j < 19; j++ ){
            scanf ("%c", &Chessboard[i][j]);
        }
    }
    for ( int i = 0; i < 19; i++){
        for ( int j = 0; j < 15; j++){
            if(Chessboard[i][j] == 'O' && Chessboard[i][j+1] == 'O' && Chessboard[i][j+2] == 'O' && Chessboard[i][j+3] == 'O' && Chessboard[i][j+4] == 'O'){
                printf("White");
                return 0;
            }
            if(Chessboard[i][j] == 'X' && Chessboard[i][j+1] == 'X' && Chessboard[i][j+2] == 'X' && Chessboard[i][j+3] == 'X' && Chessboard[i][j+4] == 'X'){
                printf("Black");
                return 0;
            }
        }
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 19; j++){
            if(Chessboard[i][j] == 'O' && Chessboard[i+1][j] == 'O' && Chessboard[i+2][j] == 'O' && Chessboard[i+3][j] == 'O' && Chessboard[i+4][j] == 'O'){
                printf("White");
                return 0;
            }
            if(Chessboard[i][j] == 'X' && Chessboard[i+1][j] == 'X' && Chessboard[i+2][j] == 'X' && Chessboard[i+3][j] == 'X' && Chessboard[i+4][j] == 'X'){
                printf("Black");
                return 0;
            }
        }
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            if(Chessboard[i][j] == 'O' && Chessboard[i+1][j+1] == 'O' && Chessboard[i+2][j+2] == 'O' && Chessboard[i+3][j+3] == 'O' && Chessboard[i+4][j+4] == 'O'){
                printf("White");
                return 0;
            }
            if(Chessboard[i][j] == 'X' && Chessboard[i+1][j+1] == 'X' && Chessboard[i+2][j+2] == 'X' && Chessboard[i+3][j+3] == 'X' && Chessboard[i+4][j+4] == 'X'){
                printf("Black");
                return 0;
            }
            if(Chessboard[i][j+4] == 'O' && Chessboard[i+1][j+3] == 'O' && Chessboard[i+2][j+2] == 'O' && Chessboard[i+3][j+1] == 'O' && Chessboard[i+4][j] == 'O'){
                printf("White");
                return 0;
            }
            if(Chessboard[i][j+4] == 'X' && Chessboard[i+1][j+3] == 'X' && Chessboard[i+2][j+2] == 'X' && Chessboard[i+3][j+1] == 'X' && Chessboard[i+4][j] == 'X'){
                printf("Black");
                return 0;
            }
        }
    }
    printf("No winner");
}