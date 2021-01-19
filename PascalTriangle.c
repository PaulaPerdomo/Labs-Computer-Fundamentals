//Paula Perdomo
//1005974313

//Declaring the functions. 
int choose(int n, int r);
int factorial(int number);
void triangle(int rows);
void spaces(int number);

#include <stdio.h>

int main() {
    
    //Declaring the variables.
    int rows;
    
    //Asking user for input.
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    while(rows >= 0 && rows <= 13) { //Only allows rows between 0 and 13. Otherwise the program terminates.
    triangle(rows);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    }
}

int choose(int n, int r) {
    
    //n and r both start from 0!
    
    int result; //Result is stored in this variable, caluclating the number needed for the rows.
    result = factorial(n) / (factorial(r) * factorial(n-r));
    return result; //Returns result.
}

int factorial(int n) { //Function calculating the factorial.
    
    int result = 1;
    for(int i = n; i >= 1; i--) {
        result *= i; //Calculates the factorial using a for loop.
    }
    return result;
}

void triangle(int rows) { //Function calculating the values of the triangle.
    
    for(int i = 0; i < rows; i++) {
        
        for(int k = 0; k < rows-i-1; k++) { //For loop for spacing of the triangle.
            printf("   "); //3 spaces to make sure a triangle is formed.
        }
        for(int j = i; j >= 0; j--) {
            printf("%d", choose(i, j)); //Prints the value of the row.
            spaces(choose(i, j)); //Prints the spaces depending the number calculating.
        }
        printf("\n");
    }
}

void spaces(int number) { //Function calculating the spacing.
    
    if(number >= 1 && number <= 9) {
        printf("     "); //5 spaces.
    }
    else if(number >= 10 && number <= 99) {
        printf("    "); // 4 spaces.
    }
    else if(number >= 100 && number <= 999) {
        printf("   "); // 3 spaces.
    }
}

