#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
int count1=0,count2=0;
char board[3][3];
const char PLAYER = 'X';
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const char COMPUTER = 'O';

void resetBoard()
{
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void printBoard(){

    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");

}
int checkFreeSpaces(){
    int freeSpaces = 9;
    int i,j;

    for(int i = 0; i < 3; i++){
        for(j =0 ; j < 3; j++){
            if(board[i][j] != ' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void computerMove()
{
   srand(time(0));
   int x;
   int y;

   if(checkFreeSpaces() > 0){
   do{
    x = rand() % 3;
    y = rand() % 3;
   }while (board[x][y] != ' ');

   board[x][y] = COMPUTER;

   }
   else
   {
     printf(" ");
   }
}


void playerMove1(){
    int x;
    int y;

    do
    {
    printf("row #(1 - 3): ");
    scanf("%d", &x);
    x--;
    printf("column #(1 - 3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' ')
    {
        printf("Invalid Move!\n");
    }
    else
    {
        board[x][y] = PLAYER1;
        break;
    }
    }while(board[x][y] != ' ');
}
void playerMove(){
    int x;
    int y;

    do
    {
    printf("Enter row #(1 - 3): ");
    scanf("%d", &x);
    x--;
    printf("Enter column #(1 - 3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' ')
    {
        printf("Invalid Move!\n");
    }
    else
    {
        board[x][y] = PLAYER;
        break;
    }
    }while(board[x][y] != ' ');
}

void playerMove2(){
    int x;
    int y;

    do
    {
    printf("row #(1 - 3): ");
    scanf("%d", &x);
    x--;
    printf("column #(1 - 3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' ')
    {
        printf("Invalid Move!\n");
    }
    else
    {
        board[x][y] = PLAYER2;
        break;
    }
    }while(board[x][y] != ' ');
}
char checkWinner(){
    for(int i = 0 ; i < 3 ; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board[0][i];
        }
    }
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
            return board[0][0];
        }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
           return board[0][2];
        }
    return ' ';
}
void printWinner(char winner){
    if(winner == PLAYER1)
    {
        printf("PLAYER 1 WIN! ");
        count1++;
    }
    else if(winner == PLAYER2)
    {
        printf("PLAYER 2 WIN! ");
        count2++;
    }
    else {
        printf("It's a tie! ");
    }

}

void two_player()
{
    printf("Player 1 is ""X""\nPlayer 2 is ""O""\n");
        char winner = ' ';
    char response;

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

    while(winner ==  ' ' && checkFreeSpaces() != 0){
        printBoard();

        playerMove1();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        printBoard();
        playerMove2();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }
     printBoard();
     printWinner(winner);
     printf("\nPlay Again? (Y/N): ");
     scanf("%c");
     scanf("%c", &response);
     response = toupper(response);
    }while (response == 'Y');

}

void one_player()
{
    printf("Player 1 is Human(X)\nPlayer 2 is Bot here!(O)\n");
       char winner = ' ';
    char response = ' ';

    do
    {
    winner = ' ';
   response = ' ';
    resetBoard();


    while(winner ==  ' ' && checkFreeSpaces() != 0){

        printBoard();

        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }


        computerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }
    printBoard();
    printWinner(winner);
     printf("\nPlay Again? (Y/N): ");
     scanf("%c");
     scanf("%c", &response);
     response = toupper(response);
    }while (response == 'Y');
}




int main(){
    int a;
    char winner = ' ';
    char response;
        int count;
   /* printf("You Have Only \"5 minutes\" / \"300 seconds\" to play ");
    for (count = 300; count >= 0; count--)
    {

        printf("\t\t\t\n\n%d ", count);

        sleep(1);
        system("cls");
    }*/
    printf("\n\n\t\t\t\tHow many player want to play? \"1\" or \"2\"\n");
    scanf("%d",&a);
    if(a==1)
    {

    one_player();


    }
    else
    {

    two_player();
    }
    printf("\n\n\tTotal Score :\n");
    printf("\n\n\tPlayer 1 WIns : %d times",count1);
    printf("\n\n\tPlayer 2 WIns : %d times",count2);
    printf("\n\tThanks For Playing!\n\n\n");


    return 0;
}
