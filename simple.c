//Steven Cotton A12565940
#include <stdio.h>
#define SIZE 3
#define mineRow 2
#define mineColumn 1
char currentBoard[SIZE][SIZE];
int moverow,movecolumn,move;
void printBoard(){
    int i,j;
    //printf("Here is the board :\n");
    printf(" ");
    for(i=0;i<SIZE;i++)
        printf("   %d",i+1);
    printf("\n");
    for(i=0;i<SIZE;i++){
        printf(" ");
        for (j=0;j<SIZE;j++)
            printf("   -");
        printf("\n");
        printf("%d |",i+1);
        for (j=0;j<SIZE;j++){
            printf(" %c |",currentBoard[i][j]);
        }
        printf("\n");
    }
    printf(" ");
    for (j=0;j<SIZE;j++)
        printf("   -");
    printf("\n");
}
int doMove(int row, int column){
    if (row==mineRow && column==mineColumn){
        currentBoard[row-1][column-1]='*';
        return 1;
    }
    else if (currentBoard[row-1][column-1]== ' '){
            currentBoard[row-1][column-1]='C';
            return 0;
    }
    else{
            printf("Already cleared! Choose again!\n");
            return 0;
    }
}
int getMove(){
    printf("Enter your move, (Row Column): ");
    scanf("%d %d",&moverow,&movecolumn);
    return (moverow*10) + movecolumn;
}
int valid(int x){
    if (x/10<=SIZE && x%10<=SIZE)
        return 1;
    else
        return 0;
}
int main(){
    int gameOver=0,i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++)
            currentBoard[i][j]=' ';
    }
    printf("Here is the board :\n");
    printBoard();
    while(gameOver==0){
        move=getMove();
        if(valid(move)){
            gameOver=doMove(moverow,movecolumn);
            if (gameOver==0){
                printf("Here is the board :\n");
                printBoard();
            }
            else
                printBoard();
        }
        else
            printf("Invalid square! Choose again!\n");
    }
    //printBoard();
    printf("Game Over!\n");
    return 0;
}
