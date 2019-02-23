//Cameron Cobb
//CS135
//tictactoe_c.c

#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define SIZE 3

void display_table(char board[SIZE][SIZE]){
    printf("The current state of the game is:");
    printf("\n");
    for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void clear_table(char board[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                board[i][j] = '_';
                }
            }
        }

int check_table_full(char board[SIZE][SIZE]){
    int occurs = 0;
    for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                if(board[i][j] == '_') {
                        occurs++;
                }
        }
    }
    if(occurs == 0){
        return true;
    }else{
        return false;
    }
}

void update_table(char board[SIZE][SIZE], int row, int col, char token){
    board[row-1][col-1] = token;
}

int check_legal_option(char board[SIZE][SIZE], int row, int col){
    if(((row>SIZE) || (col>SIZE)) && ((row<0) || (col<0))){
        return true;
    }else if(board[row-1][col-1] != '_'){ //checks if invalid move
        return true;
    }else{
        return false;
    }
}

int check_three_in_a_row(char board[SIZE][SIZE]){
    //Player 1 (O Token)
    ////////////////////////////////////////////////////////////////////////////
    if((board[0][0] == 'O') && (board[0][0] == board[0][1]) && (board[0][1] == board[0][2])){
            return 1; //return 1 if player 1 wins

    }
    else if((board[1][0] == 'O') && (board[1][0] == board[1][1]) && (board[1][1] == board[1][2])){
            return 1; //return 1 if player 1 wins                                                           //ROW

    }
    else if((board[2][0] == 'O') && (board[2][0] == board[2][1]) && (board[2][1] == board[2][2])){
            return 1; //return 1 if player 1 wins
    }
    ////////////////////////////////////////////////////////////////////////////////
    else if((board[0][0] == 'O') && (board[0][0] == board[1][0]) && (board[1][0] == board[2][0])){
            return 1; //return 1 if player 1 wins
    }
    else if((board[0][1] == 'O') && (board[0][1] == board[1][1]) && (board[1][1] == board[2][1])){
            return 1; //return 1 if player 1 wins                                                           //COL
    }
    else if((board[0][2] == 'O') && (board[0][2] == board[1][2]) && (board[1][2] == board[2][2])){
            return 1; //return 1 if player 1 wins
    }
    ////////////////////////////////////////////////////////////////////////////
    else if((board[0][0] == 'O') && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])){
            return 1; //return 1 if player 1 wins
    }
    else if((board[2][0]== 'O') && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])){
        return 1; //return 1 if player 1 wins                                                              //diagnal
    }
    ////////////////////////////////////////////////////////////////////////

    //Player 2 (X token)
    ////////////////////////////////////////////////////////////////////////////
    if((board[0][0] == 'X') && (board[0][0] == board[0][1]) && (board[0][1] == board[0][2])){
            return 2; //return 1 if player 1 wins

    }
    else if((board[1][0] == 'X') && (board[1][0] == board[1][1]) && (board[1][1] == board[1][2])){
            return 2; //return 1 if player 1 wins                                                           //ROW

    }
    else if((board[2][0] == 'X') && (board[2][0] == board[2][1]) && (board[2][1] == board[2][2])){
            return 2; //return 1 if player 1 wins
    }
    ////////////////////////////////////////////////////////////////////////////////
    else if((board[0][0] == 'X') && (board[0][0] == board[1][0]) && (board[1][0] == board[2][0])){
            return 2; //return 1 if player 1 wins
    }
    else if((board[0][1] == 'X') && (board[0][1] == board[1][1]) && (board[1][1] == board[2][1])){
            return 2; //return 1 if player 1 wins                                                           //COL
    }
    else if((board[0][2] == 'X') && (board[0][2] == board[1][2]) && (board[1][2] == board[2][2])){
            return 2; //return 1 if player 1 wins
    }
    ////////////////////////////////////////////////////////////////////////////
    else if((board[0][0] == 'X') && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])){
            return 2; //return 1 if player 1 wins
    }
    else if((board[2][0]== 'X') && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])){
        return 2; //return 1 if player 1 wins                                                              //diagnal
    }
    /////////////////////////////////////////////////////////////////////////////
    else if(check_table_full(board) == true){
        return 0; // if no player has 3 in a row
    }else{
        return 0;
    }
}

int check_end_of_game(char board[SIZE][SIZE]){
    if((check_table_full(board) == true) || (check_three_in_a_row(board) == 1) || (check_three_in_a_row(board) == 2)){
        return true; // end of game
    }else{
        return false;
    }
}

void get_player1_move(char board[SIZE][SIZE], int row, int col){
    if(check_end_of_game(board)== false){
    char token = 'O';
    do{
    printf("Player 1 enter your selection [row, col]: ");
    scanf("%d,%d", &row, &col);
    }while((check_legal_option(board,row,col)== true) && (check_three_in_a_row(board) == false));
    update_table(board, row, col, token);
    display_table(board);
    }
}

void generate_player2_move(char board[SIZE][SIZE], int row, int col){
    if(check_end_of_game(board)== false){
    char token = 'X';
    do{
    srand(time(0));
    for (int i = 0; i < 1; i++) {
        int num1 = (rand() % (3)) + 1;
        row = num1;
    }
    for (int i = 0; i < 1; i++) {
        int num2 = (rand() % (3)) + 1;
        col = num2;
    }
    }while((check_legal_option(board,row,col)== true) && (check_three_in_a_row(board) == false));
    printf("Player 2 has entered [row, col]: %d,%d\n", row, col);
    update_table(board, row, col, token);
    display_table(board);
    }
}

void print_winner(char board[SIZE][SIZE]){
    if(check_three_in_a_row(board) == 1){
        printf("Congratulations, Player 1 wins!\n");
    }else if(check_three_in_a_row(board) == 2){
        printf("Congratulations, Player 2 wins!\n");
    }else if(check_three_in_a_row(board) == 0){
        printf("Game over, no player wins.\n");
    }
}

int main (){

    //Declare the tic-tac-toe board
    char board[SIZE][SIZE];
    char choice = 'Y';

    //The row and column of the move for either player 1 or 2
    int row, col;
    while(choice == 'Y'){
    //Clear the table
    clear_table(board);

    //Display the table
    display_table(board);

    do{
        //Have player 1 enter their move
        get_player1_move(board, row, col);

        //Generate player 2 move
        generate_player2_move(board, row, col);

        //Do this while the game hasn't ended
        }while(check_end_of_game(board) == false);

        //After the game is over, print who won
        print_winner(board);
        do{
        printf("Would you like to play again (Y/N): ");
        scanf(" %c", &choice);
        }while(choice != 'N' && choice != 'Y');
    }

        return 0;
}
