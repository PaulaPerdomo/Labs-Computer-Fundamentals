//Paula Perdomo
// 1005974313

#include <stdio.h>
#include <stdbool.h>

    //Function to print the board, with the appropiate alphabetic indexes.
void printBoard(char board[26][26], int n) { //Function to print the board.

  printf("  ");

  for(int i = 0; i < n; i++) { //Prints the row of letters at the top of the board.
    printf("%c", i+97);
  }

  printf("\n");

  for(int i = 0; i < n; i++) {
    printf("%c ", i+97);
    for(int j = 0; j < n; j++) {
      printf("%c", board[i][j]);
      }
    printf("\n");
  }
}

    //Function to check if the movements are within the baord.
bool positionInBounds(int n, int row, int column) {

  if(row >= 0 && column >= 0 && row <= n-1 && column <= n-1) //Checks the position in bounds.
    return true;
  else
    return false;
}

//Function that checks if the movement is allowed, depending on the direction looked at.
bool checkLegalInDirection(char board[26][26], int n, int row, int column, char colour, int deltaRow, int deltaColumn) {
    
    //Sets opponent colour, based of the colour played.
  char opponent = '\0';
  if(colour == 'B')
    opponent = 'W';
  if(colour == 'W')
    opponent = 'B';

  int count = 1;

    //Checks if the positions is valid with the use of the bound function and a counter that checks in a specific direction.
  while(true) {
    if(!positionInBounds(n, row+deltaRow*count, column+deltaColumn*count))
      return false;
    if(count > 1 && board[row+deltaRow*count][column+deltaColumn*count] == colour)
      return true;
    if(board[row+deltaRow*count][column+deltaColumn*count] != opponent)
      return false;
    
    count++;
  }
}

    //Flipe the tiles to the according colour.
void flipTiles(char board[26][26], int n, int row, int column, char colour, int deltaRow, int deltaColumn) {

  char opponent = '\0';
  if(colour == 'B')
    opponent = 'W';
  if(colour == 'W')
    opponent = 'B';

  int count = 1;
    
  while(board[row+deltaRow*count][column+deltaColumn*count] != colour) {
    board[row+deltaRow*count][column+deltaColumn*count] = colour;
    count++;
  }
}

int main() {
    
  //Declaring variables.
  int dimension;
  
  //Takes in user input.
  printf("Enter the board dimension: ");
  scanf("%d", &dimension);
  
  char board[26][26];
  
  for(int i = 0; i < dimension; i++) {
      for(int j = 0; j < dimension; j++) {
          board[i][j] = 'U';
          //Initializes the board to the game's inital position.
          board[dimension/2-1][dimension/2] = 'B';
          board[dimension/2][dimension/2-1] = 'B';
          board[dimension/2-1][dimension/2-1] = 'W';
          board[dimension/2][dimension/2] = 'W';
      }
  }

  printBoard(board, dimension);
    
  //Takes user input with the use of strings.
  printf("Enter board configuration: ");
  
  char moves[3];
  
  //Takes the string input and places it on the board.
  while(moves[0] != '!' && moves[1] != '!' && moves[2] != '!'){
      scanf("%s", moves);
      board[moves[1]-97][moves[2]-97] = moves[0];
  }
  
  printBoard(board, dimension);

  printf("Available moves for W:\n");
  
  //Checks for available movements for W by starting at U.
  for(int i = 0; i < dimension; i++) {
    for(int j = 0; j < dimension; j++) {
      if(board[i][j] == 'U') {

        //Checks available movements with the use of the function in 8 directions.
        if(checkLegalInDirection(board, dimension, i, j, 'W', -1, -1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'W', -1, 0))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', -1, 1))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', 0, -1))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', 0, 1))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', 1, -1))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', 1, 0))
          printf("%c%c\n", i+97, j+97);
        if(checkLegalInDirection(board, dimension, i, j, 'W', 1, 1))
          printf("%c%c\n", i+97, j+97);
        }
    }
  }

  printf("Available moves for B:\n");
  
  //Checks for available movements for B by starting at U.
  for(int i = 0; i < dimension; i++) {
    for(int j = 0; j < dimension; j++) {
        if(board[i][j] == 'U') {
        
        //Checks available movements with the use of the function in 8 directions.
        if(checkLegalInDirection(board, dimension, i, j, 'B', -1, -1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', -1, 0))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', -1, 1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', 0, -1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', 0, 1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', 1, -1))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', 1, 0))
          printf("%c%c\n", i+97, j+97);
        else if(checkLegalInDirection(board, dimension, i, j, 'B', 1, 1))
          printf("%c%c\n", i+97, j+97);
        }
    }
  }

  //User inputs a move.
  printf("Enter a move: ");

  //Another string is used to take the input.
  char moves1[3];
  scanf("%s", moves1);

  //Checks and displays if the movement is valid or invalid. If movement is valid, the tiles of the board flip with the use of the function.
  if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], -1, -1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves[2]-97, moves1[0], -1, -1);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], -1, 0)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], -1, 0);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], -1, 1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], -1, 1);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 0, -1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 0, -1);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 0, 1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 0, 1);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, -1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, -1);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, 0)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, 0);
  }
  else if(checkLegalInDirection(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, 1)) {
    board[moves1[1]-97][moves1[2]-97] = moves1[0];
    printf("Valid move.\n");
    flipTiles(board, dimension, moves1[1]-97, moves1[2]-97, moves1[0], 1, 1);
  }
  else {
    printf("Invalid move.\n");
  }

  printBoard(board, dimension);

}
