#include <stdio.h>
#include <stdlib.h>
#include "rawRecipes.h"
#include <string.h>
#include <stdbool.h>
//#include "rawRecipesDevt.h"

// IF IT'S EASIER, YOU NEED NOT BE OVERLY GENERAL/FLEXIBLE
// BUT CAN ASSUME THESE LIMITS
#define MAXRECIPES 30 /* max # of recipes */
#define MAXINGREDIENTTYPES 250 /* max # of ingredient types */
#define MAXINGREDIENTS 250 /* max # of ingredients all recipes */

typedef struct recipes {
    char *recipeName;
    char *recipeIngredients[MAXINGREDIENTS];
    int numberIngredients;
} Recipes;

// INCLUDE YOUR OWN "HELPER" ROUTINES AS YOU SEE FIT

/* list all recipe titles with recipe number beside
 */
void ListAllRecipes(Recipes *list, int *recipeCounter) {

    for(int i = 0; i < *recipeCounter; i++) {
        printf("Recipe #%d: %s\n", i+1, list[i].recipeName);
    }

}

/*
 * convertInputToDataStructure
 * Takes the information in rawRecipes.h and puts it into a data
 * structure of your choosing, however: 1 mark of the lab will be
 * for using structs with pointers in your solution.
 * You might also want to consider the outputs from the program
 * (see the menu printed in printMenu) since some structures will
 * make this easier than others.
 */
void convertInputToDataStructure(Recipes list[MAXRECIPES], int* recipeCounter) {

    *recipeCounter = 0;
    int loopCounter = 0;
    int ingredientCounter = 0;
    int counterI = 0;
    
    while(strcmp(rawRecipes[loopCounter],"") != 0) {
        if(rawRecipes[loopCounter][0] == '1') {
            list[counterI-1].recipeIngredients[ingredientCounter] = rawRecipes[loopCounter]+1;
            ingredientCounter++;
            list[counterI-1].numberIngredients = ingredientCounter;
        }
        if(rawRecipes[loopCounter][0] == '0') {
            list[*recipeCounter].recipeName = rawRecipes[loopCounter]+1;
            counterI++;
            ingredientCounter = 0;
        }
        loopCounter++;
        *recipeCounter = counterI;
    }
}
   
//* //printMenu - Prints out the user menu

void printMenu() {
    printf("\n\nEnter a command by number\n");
    printf("1. List all Recipes\n");
    printf("2. Print a Recipe\n");
    printf("3. List All Recipes with a given ingredient\n");
    printf("4. List All Ingredients in alphabetical order\n");
    printf("5. Exit the program\n");
    printf("Give input: ");
}


/*
 * printRecipe asks the user for the recipe number then prints out
 * the title and the ingredients of that recipe.
 */
void printRecipe(Recipes *list) { //Does this make sense?
    
    int number;
    printf("Give the number of the recipe (1-24): ");
    scanf("%d", &number);
    printf("%s\n", list[number-1].recipeName);
    for(int i = 0; i < list[number-1].numberIngredients; i++) {
        printf("%s\n", list[number-1].recipeIngredients[i]);
    }
}

/*
 * printForIngredients asks for an ingredient and prints out
 * a list of all recipes that have that ingredient. The user must
 * enter the exact name of the ingredient (including capital letters)
 */
void printForIngredient(Recipes* list, int* recipeCounter) {
    
    char ingredient[50];
    printf("Give the name of the ingredient: ");
    scanf(" %[^\n]%*c", ingredient);
    
    for(int i = 0; i < *recipeCounter; i++) {
        for(int j = 0; j < list[i].numberIngredients; j++) {
            if(strcmp(list[i].recipeIngredients[j], ingredient) == 0) {
                printf("%s\n", list[i].recipeName);
            }
        }
    }
}

/*
 * printAllIngredients prints a list of all the ingredients used by
 * all the recipes. The list should be in alphabetical order, and have
 * no duplicates. (Any ingredient with a variation in entry, such as
 * "white vinegar" and "white wine vinegar" are considered as different
 * ingredients.
 */
void printAllIngredients(Recipes *list, int* recipeCounter){
    
    char* organize[MAXINGREDIENTS];
    int i = 0;
    int loopCounter = 0;
    

    while(strcmp(rawRecipes[loopCounter],"") != 0) {
        if(rawRecipes[loopCounter][0] != '0') {
            bool found = false;
            for(int j = 0; j < i; j++) {
                if(organize[j] == rawRecipes[loopCounter]+1) {
                    found = true;
                    i++;
                }
            }
            if(found == false) {
                organize[i] = rawRecipes[loopCounter]+1;
                i++;
            }
        }
        loopCounter++;
    }
    
    char* temp;
    for(int k = 0; k < i; k++) {
        for(int a = 0; a < i; a++)
            if(strcmp(organize[k], organize[a]) < 0) {
                temp = organize[k];
                organize[k] = organize[a];
                organize[a] = temp;
            }
    }
    
    printf("ALL INGREDIENTS");
    for(int b = 0; b < i; b++) {
        printf("%d: %s", b, organize[b]);
    }
}
    
int main() {
    // first move data from rawRecipes.h to a data structure
    
    Recipes recipeList[MAXRECIPES];
    int countingVariable;
    convertInputToDataStructure(recipeList, &countingVariable);
    
    char notDone = 1;
    while(notDone){
        printMenu();
        int userChoice;
        scanf("%d",&userChoice);
        switch (userChoice){
            case 1:
                ListAllRecipes(recipeList, &countingVariable);
                break;
            case 2:
                printRecipe(recipeList);
                break;
            case 3:
                printForIngredient(recipeList, &countingVariable);
                break;
            case 4:
                printAllIngredients(recipeList, &countingVariable);
                break;
            case 5:
                notDone = 0;
                break;
            default:
                printf("Bad command\n");
                break;
        }
    }
    // PUT ANY POST_RUN CODE HERE

    return 0;
}
    


