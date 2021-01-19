//Paula Perdomo
//1005974313

#include <stdio.h>
#include <stdlib.h>

void reading(int array[], int lenght);
void searching(int array[], int arrayString[], int length);

int main() {
    
    int DNA[] = {1, 2, 4, 2, 2, 2, 1, 4, 4, 2, 3, 4, 4, 4, 2, 1, 4, 1, 3, 3, 2, 1, 3, 2, 1, 1, 2, 2, 2, 3, 4, 1, 3, 1, 2, 1, 4, 4, 4, 1, 1, 3, 1, 4, 2, 4, 4, 1, 4, 4, 1, 4, 4, 4, 4, 1, 1, 2, 3, 3, 3, 3, 4, 4, 3, 2, 3, 2, 3, 4, 3, 3, 4, 4, 1, 3, 3, 2, 1, 2, 3, 1, 2, 1, 3, 3, 2, 1, 4, 1, 4, 3, 4, 4, 4, 1, 2, 1, 3, 2, 0};
    
    //Declaring variables.
    int length;

    //Asking user for input.
    printf("Enter length of DNA string to match: ");
    scanf("%d", &length);
    
    int DNAstring[length];
    //While length is greater than 0.
    while(length > 0) {
        printf("Enter %d characters (one of 12345) as a search string: ", length);
        reading(DNAstring, length);
        searching(DNA, DNAstring, length);
        printf("Enter length of DNA string to match: ");
        scanf("%d", &length);
    }
    printf("Goodbye\n");
}

//Function to read the DNAstring.
void reading(int array[], int length) {
    
    for(int i = 0; i < length; i++) {
        scanf("%1d", &array[i]);
        if(array[i] < 0 || array[i] >= 6) {
            printf("Erroneous character input '%d' exiting\nGoodbye\n", array[i]);
            exit(0);
        }
    }
}

//Function to search the DNAstring in the DNA matrix.
void searching(int array[], int arrayString[], int length) {
    
     int j = 0;
     while(array[j] != 0) {
         int counter = 0;
             while(array[j+counter] == arrayString[0+counter] || arrayString[0+counter] == 5) {
                 if(counter == length-1) {
                 printf("Match of search string found at element %d\n", j);
                 }
                 counter++;
             }
         j++;
         }
}





    


    
    
    
   
        
    
    
    



