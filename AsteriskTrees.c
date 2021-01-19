//Paula Perdomo
//1005974313

#include <stdio.h>

int main() {
    
    //Declaring variables.
    int rows;
    
    //User inputs number of rows in the triangle.
    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &rows);
    
    //If the user inputs a negative number or a row greater than 20, the program terminates.
    if(rows < 1 && rows > 20) {
        return 0;
    }
   
    //For loop used for the number of rows.
    for(int numOfRows = 1; numOfRows <= rows; numOfRows++) {
        //For loop used for spacing.
        for(int numOfSpaces = 1; numOfSpaces <= rows - numOfRows; numOfSpaces++) {
            printf(" "); //Prints space.
        }
        //For loop for the number of stars in a row (columns).
        for(int numOfStars = 1; numOfStars <= (numOfRows*2)-1; numOfStars++) {
            //Prints star based of the conditions.
            if(numOfStars == 1 || numOfStars == (numOfRows *2-1) || numOfRows == 0 || numOfRows == rows) {
                printf("*");
                }
            //Prints star for the other cases.
            else {
                printf(" ");
                }
        }
        //Prints new line.
         printf("\n");
        }
}
    
    
    

