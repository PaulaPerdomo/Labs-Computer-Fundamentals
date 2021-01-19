//
//  main.c
//  Lab3
//
//  Created by Maria Paula Perdomo on 2020-01-17.
//  Copyright © 2020 Maria Paula Perdomo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>

int main() {
    
    //Declaring the variables for every band of resistor 1 and 2. Declaring variables for the strings of the colours.
    char band1R1, band2R1, multiplierBandR1, toleranceBandR1;
    char band1R2, band2R2, multiplierBandR2, toleranceBandR2;
    char *firstColour1, *secondColour1, *thirdColour1, *fourthColour1, *tolerance1 = 0;
    char *firstColour2, *secondColour2, *thirdColour2, *fourthColour2, *tolerance2 = 0;
    char *unitsR1, *unitsR2, *unitsSeries, *unitsParallel;
    float resistance1, resistance2, colour1R1, colour2R1, colour1R2, colour2R2, multiplier1, multiplier2, series = 0, parallel = 0;
    
    //User inputs characters for resistor 1 and 2.
    printf("Please enter the 1st band of resistor 1: \n");
    scanf(" %c", &band1R1);
    printf("Please enter the 2nd band of resistor 1: \n");
    scanf(" %c", &band2R1);
    printf("Please enter the multiplier band of resistor 1: \n");
    scanf(" %c", &multiplierBandR1);
    printf("Please enter the tolerance band of resistor 1: \n");
    scanf(" %c", &toleranceBandR1);
    printf("Please enter the 1st band of resistor 2: \n");
    scanf(" %c", &band1R2);
    printf("Please enter the 2nd band of resistor 2: \n");
    scanf(" %c", &band2R2);
    printf("Please enter the multiplier band of resistor 2: \n");
    scanf(" %c", &multiplierBandR2);
    printf("Please enter the tolerance band of resistor 2: \n");
    scanf(" %c", &toleranceBandR2);
       
//RESISTOR 1 CODE!
    
    printf("\n");
    
    printf("Colour bands for resistor 1: \n");
    
   //For the first colour of resistor 1 using if statements.
      if (( band1R1 == 'K' ) || ( band1R1 == 'k')) {
        firstColour1 = "Black";
        colour1R1 = 0;
    } else if (( band1R1 == 'B') || ( band1R1 == 'b')) {
        firstColour1 = "Brown";
        colour1R1 = 10;
    } else if (( band1R1 == 'R') || ( band1R1 == 'r')) {
        firstColour1 = "Red";
        colour1R1 = 20;
    } else if (( band1R1 == 'O') || ( band1R1 == 'o')) {
        firstColour1 = "Orange";
        colour1R1 = 30;
    } else if (( band1R1 == 'E') || ( band1R1 == 'e')) {
        firstColour1 = "Yellow";
        colour1R1 = 40;
    } else if (( band1R1 == 'G') || ( band1R1 == 'g')) {
        firstColour1 = "Green";
        colour1R1 = 50;
    } else if (( band1R1 == 'U') || ( band1R1 == 'u')) {
        firstColour1 = "Blue";
        colour1R1 = 60;
    } else if (( band1R1 == 'V') || ( band1R1 == 'v')) {
        firstColour1 = "Violet";
        colour1R1 = 70;
    } else if (( band1R1 == 'Y') || ( band1R1 == 'y')) {
        firstColour1 = "Grey";
        colour1R1 = 80;
    } else if (( band1R1 == 'W') || ( band1R1 == 'w')) {
        firstColour1 = "White";
        colour1R1 = 90;
    } else {
        printf("\nInvalid colour for the 1st band of resistor 1. Exiting the program...\n");
return 0;
    }
  printf("%s", firstColour1); //Prints the first colour based on the band.
    
   //For the second colour of resistor 1 using if statements.
     if (( band2R1 == 'K' ) || ( band2R1 == 'k')) {
           secondColour1 = "Black";
           colour2R1 = 0;
     } else if (( band2R1 == 'B') || ( band2R1 == 'b')) {
           secondColour1 = "Brown";
           colour2R1 = 1;
     } else if (( band2R1 == 'R') || ( band2R1 == 'r')) {
           secondColour1 = "Red";
           colour2R1 = 2;
     } else if (( band2R1 == 'O') || ( band2R1 == 'o')) {
           secondColour1 = "Orange";
           colour2R1 = 3;
     } else if (( band2R1 == 'E') || ( band2R1 == 'e')) {
           secondColour1 = "Yellow";
           colour2R1 = 4;
     } else if (( band2R1 == 'G') || ( band2R1 == 'g')) {
           secondColour1 = "Green";
           colour2R1 = 5;
     } else if (( band2R1 == 'U') || ( band2R1 == 'u')) {
           secondColour1 = "Blue";
           colour2R1 = 6;
     } else if (( band2R1 == 'V') || ( band2R1 == 'v')) {
           secondColour1 = "Violet";
           colour2R1 = 7;
     } else if (( band2R1 == 'Y') || ( band2R1 == 'y')) {
           secondColour1 = "Grey";
           colour2R1 = 8;
    } else if (( band2R1 == 'W') || ( band2R1 == 'w')) {
           secondColour1 = "White";
           colour2R1 = 9;
     } else {
        printf("\nInvalid colour for the 2nd band of resistor 1. Exiting the program...");
return 0;
       }
   printf(" %s", secondColour1); //Prints the second colour based on the band.

    //For the third colour of resistor 1 using if ststaments.
    if (( multiplierBandR1 == 'K' ) || ( multiplierBandR1 == 'k')) {
            thirdColour1 = "Black";
            multiplier1 = 1;
    } else if (( multiplierBandR1 == 'B') || ( multiplierBandR1 == 'b')) {
            thirdColour1 = "Brown";
            multiplier1 = 10;
    } else if (( multiplierBandR1 == 'R') || ( multiplierBandR1 == 'r')) {
            thirdColour1 = "Red";
            multiplier1 = 100;
    } else if (( multiplierBandR1 == 'O') || ( multiplierBandR1 == 'o')) {
            thirdColour1 = "Orange";
            multiplier1 = 1000;
    } else if (( multiplierBandR1 == 'E') || ( multiplierBandR1 == 'e')) {
            thirdColour1 = "Yellow";
            multiplier1 = 10000;
    } else if (( multiplierBandR1 == 'G') || ( multiplierBandR1 == 'g')) {
            thirdColour1 = "Green";
            multiplier1 = 100000;
    } else if (( multiplierBandR1 == 'U') || ( multiplierBandR1 == 'u')) {
            thirdColour1 = "Blue";
            multiplier1 = 1000000;
    } else if (( multiplierBandR1 == 'V') || ( multiplierBandR1 == 'v')) {
            thirdColour1 = "Violet";
            multiplier1 = 10000000;
    } else if (( multiplierBandR1 == 'L') || ( multiplierBandR1 == 'l')) {
            thirdColour1= "Gold";
            multiplier1 = 0.1;
    } else if (( multiplierBandR1 == 'S') || ( multiplierBandR1 == 's')) {
            thirdColour1 = "Silver";
            multiplier1 = 0.01;
    } else {
           printf("\nInvalid colour for the multiplier band of resistor 1. Exiting the program...");
return 0;
          }
    printf(" %s", thirdColour1); //Prints the third colour based on the band.
      
    //For the fourth colour of resistor 1 using if statements.
 //   if (( toleranceBandR1 == 'K' ) || ( toleranceBandR1 == 'k')) {
  //          fourthColour1 = "Black";
   //         printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
    //        return 0;
     if (( toleranceBandR1 == 'B') || ( toleranceBandR1 == 'b')) {
            fourthColour1 = "Brown";
            tolerance1 = "+/- 1.00%";
    } else if (( toleranceBandR1 == 'R') || ( toleranceBandR1 == 'r')) {
            fourthColour1 = "Red";
            tolerance1 = "+/- 2.00%";
    } else if (( toleranceBandR1 == 'O') || ( toleranceBandR1 == 'o')) {
            fourthColour1 = "Orange";
            printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
            return 0;
    } else if (( toleranceBandR1 == 'E') || ( toleranceBandR1 == 'e')) {
            fourthColour1 = "Yellow";
            printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
            return 0;
    } else if (( toleranceBandR1 == 'G') || ( toleranceBandR1 == 'g')) {
            fourthColour1 = "Green";
            tolerance1 = "+/- 0.5%";
    } else if (( toleranceBandR1 == 'U') || ( toleranceBandR1 == 'u')) {
            fourthColour1 = "Blue";
            tolerance1 = "+/- 0.25%";
    } else if (( toleranceBandR1 == 'V') || ( toleranceBandR1 == 'v')) {
            fourthColour1 = "Violet";
            tolerance1 = "+/- 0.10%";
    } else if (( toleranceBandR1 == 'Y') || ( toleranceBandR1 == 'y')) {
            fourthColour1 = "Grey";
            tolerance1 = "+/- 0.05%";
    } else if (( toleranceBandR1 == 'L') || ( toleranceBandR1 == 'l')) {
            fourthColour1 = "Gold";
            tolerance1 = "+/- 5.00%";
    } else if (( toleranceBandR1 == 'S') || ( toleranceBandR1 == 's')) {
            fourthColour1 = "Silver";
            tolerance1 = "+/- 10.00";
    } else {
           printf("\nInvalid colour for the tolerance band of resistor 1. Exiting the program...");
return 0;
    }
    printf(" %s\n", fourthColour1); //Prints the fourth colour based on the band.

//RESISTOR 2 CODE!
   
     printf("Colour bands for resistor 2: \n");
    
    //For the first colour of resistor 2 using if statements.
       if (( band1R2 == 'K' ) || ( band1R2 == 'k')) {
         firstColour2 = "Black";
         colour1R2 = 0;
     } else if (( band1R2 == 'B') || ( band1R2 == 'b')) {
         firstColour2 = "Brown";
         colour1R2 = 10;
     } else if (( band1R2 == 'R') || ( band1R2 == 'r')) {
         firstColour2 = "Red";
         colour1R2 = 20;
     } else if (( band1R2 == 'O') || ( band1R1 == 'o')) {
         firstColour2 = "Orange";
         colour1R2 = 30;
     } else if (( band1R2 == 'E') || ( band1R2 == 'e')) {
         firstColour2 = "Yellow";
         colour1R2 = 40;
     } else if (( band1R2 == 'G') || ( band1R2 == 'g')) {
         firstColour2 = "Green";
         colour1R2 = 50;
     } else if (( band1R2 == 'U') || ( band1R1 == 'u')) {
         firstColour2 = "Blue";
         colour1R2 = 60;
     } else if (( band1R2 == 'V') || ( band1R2 == 'v')) {
         firstColour2 = "Violet";
         colour1R2 = 70;
     } else if (( band1R2 == 'Y') || ( band1R2 == 'y')) {
         firstColour2 = "Grey";
         colour1R2 = 80;
     } else if (( band1R2 == 'W') || ( band1R2 == 'w')) {
         firstColour2 = "White";
         colour1R2 = 90;
     } else {
         printf("\nInvalid colour for the 1st band of resistor 2. Exiting the program...\n");
return 0;
     }
    printf("%s", firstColour2); //Prints the first colour based on the band.
    
    //For the second colour of resistor 2 using if statements.
      if (( band2R2 == 'K' ) || ( band2R2 == 'k')) {
            secondColour2 = "Black";
            colour2R2 = 0;
      } else if (( band2R2 == 'B') || ( band2R2 == 'b')) {
            secondColour2 = "Brown";
            colour2R2 = 1;
      } else if (( band2R2 == 'R') || ( band2R2 == 'r')) {
            secondColour2 = "Red";
            colour2R2 = 2;
      } else if (( band2R2 == 'O') || ( band2R2 == 'o')) {
            secondColour2 = "Orange";
            colour2R2 = 3;
      } else if (( band2R2 == 'E') || ( band2R2 == 'e')) {
            secondColour2 = "Yellow";
            colour2R2 = 4;
      } else if (( band2R2 == 'G') || ( band2R2 == 'g')) {
            secondColour2 = "Green";
            colour2R2 = 5;
      } else if (( band2R2 == 'U') || ( band2R2 == 'u')) {
            secondColour2 = "Blue";
            colour2R2 = 6;
      } else if (( band2R2 == 'V') || ( band2R2 == 'v')) {
            secondColour2 = "Violet";
            colour2R2 = 7;
      } else if (( band2R2 == 'Y') || ( band2R2 == 'y')) {
            secondColour2 = "Grey";
            colour2R2 = 8;
      } else if (( band2R2 == 'W') || ( band2R2 == 'w')) {
            secondColour2 = "White";
            colour2R2 = 9;
      } else {
         printf("\nInvalid colour for the 2nd band of resistor 2. Exiting the program...\n");
return 0;
        }
    printf(" %s", secondColour2); //Prints the second colour based on the band.

     //For the third colour of resistor 2.
     if (( multiplierBandR2 == 'K' ) || ( multiplierBandR2 == 'k')) {
             thirdColour2 = "Black";
             multiplier2 = 1;
     } else if (( multiplierBandR2 == 'B') || ( multiplierBandR2 == 'b')) {
             thirdColour2 = "Brown";
             multiplier2 = 10;
     } else if (( multiplierBandR2 == 'R') || ( multiplierBandR2 == 'r')) {
             thirdColour2 = "Red";
             multiplier2 = 100;
     } else if (( multiplierBandR2 == 'O') || ( multiplierBandR2 == 'o')) {
             thirdColour2 = "Orange";
             multiplier2 = 1000;
     } else if (( multiplierBandR2 == 'E') || ( multiplierBandR2 == 'e')) {
             thirdColour2 = "Yellow";
             multiplier2 = 10000;
     } else if (( multiplierBandR2 == 'G') || ( multiplierBandR2 == 'g')) {
             thirdColour2 = "Green";
             multiplier2 = 100000;
     } else if (( multiplierBandR2 == 'U') || ( multiplierBandR2 == 'u')) {
             thirdColour2 = "Blue";
             multiplier2 = 1000000;
     } else if (( multiplierBandR2 == 'V') || ( multiplierBandR2 == 'v')) {
             thirdColour2 = "Violet";
             multiplier2 = 10000000;
     } else if (( multiplierBandR2 == 'L') || ( multiplierBandR2 == 'l')) {
             thirdColour2 = "Gold";
             multiplier2 = 0.1;
     } else if (( multiplierBandR2 == 'S') || ( multiplierBandR2 == 's')) {
             thirdColour2 = "Silver";
             multiplier2 = 0.01;
     } else {
            printf("\nInvalid colour for the multiplier band of resistor 2. Exiting the program..." );
return 0;
           }
    printf(" %s", thirdColour2); //Prints the third colour based on the band.
     
     //For the fourth colour of resistor 2 using if statements.
     if (( toleranceBandR2 == 'K' ) || ( toleranceBandR2 == 'k')) {
             fourthColour2 = "Black";
             printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
            return 0;
    } else if (( toleranceBandR2 == 'B') || ( toleranceBandR2 == 'b')) {
             fourthColour2 = "Brown";
             tolerance2 = "+/- 1.00%";
    } else if (( toleranceBandR2 == 'R') || ( toleranceBandR2 == 'r')) {
             fourthColour2 = "Red";
             tolerance2 = "+/- 2.00%";
    } else if (( toleranceBandR2 == 'O') || ( toleranceBandR2 == 'o')) {
             fourthColour2 = "Orange";
             printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
             return 0;
    } else if (( toleranceBandR2 == 'E') || ( toleranceBandR2 == 'e')) {
             fourthColour2 = "Yellow";
             printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
            return 0;
    } else if (( toleranceBandR2 == 'G') || ( toleranceBandR2 == 'g')) {
             fourthColour2 = "Green";
             tolerance2 = "+/- 0.5%";
    } else if (( toleranceBandR2 == 'U') || ( toleranceBandR2 == 'u')) {
             fourthColour2 = "Blue";
             tolerance2 = "+/- 0.25%";
    } else if (( toleranceBandR2 == 'V') || ( toleranceBandR2 == 'v')) {
             fourthColour2 = "Violet";
             tolerance2 = "+/- 0.10%";
    } else if (( toleranceBandR2 == 'Y') || ( toleranceBandR2 == 'y')) {
             fourthColour2 = "Grey";
             tolerance2 = "+/- 0.05%";
    } else if (( toleranceBandR2 == 'L') || ( toleranceBandR2 == 'l')) {
             fourthColour2 = "Gold";
             tolerance2 = "+/- 5.00%";
    } else if (( toleranceBandR2 == 'S') || ( toleranceBandR2 == 's')) {
             fourthColour2 = "Silver";
             tolerance2 = "+/- 10.00";
    } else {
            printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...");
return 0;
           }
    printf(" %s", fourthColour2); //Prints the fourth colour based on the band.
 
    
    //Formulas to calculate the reistance of resitor 1 and 2. Formulas to calculate the series and parallel.
    resistance1 = (colour1R1 + colour2R1) * multiplier1;
    resistance2 = (colour1R2 + colour2R2) * multiplier2;
    series = resistance1 + resistance2;
    parallel = (resistance1 * resistance2) / (resistance1 + resistance2);
    
    //if statements used to print the correct units for the resistance, series and parallel.
    if (resistance1 >= 1000000){
        resistance1 = resistance1 / 1000000;
        unitsR1 = "MOhms";
    } else if (resistance1 >= 1000){
       resistance1 = resistance1 / 1000;
       unitsR1 = "KOhms";
    } else if (resistance1 < 1000){
        resistance1 = resistance1 / 1;
        unitsR1 = "Ohms";
    } else {}
    
    if (resistance2 >= 1000000){
        resistance2 = resistance2 / 1000000;
        unitsR2 = "MOhms";
    } else if (resistance2 >= 1000){
       resistance2 = resistance2 / 1000;
       unitsR2 = "KOhms";
    } else if (resistance2 < 1000){
        resistance2 = resistance2 / 1;
        unitsR2 = "Ohms";
    } else {}
    
    if (series >= 1000000){
        series = series / 1000000;
        unitsSeries = "MOhms";
    } else if (series >= 1000){
       series = series / 1000;
       unitsSeries = "KOhms";
    } else if (series < 1000){
        series = series / 1;
        unitsSeries = "Ohms";
    } else {}
    
    if (parallel >= 1000000){
        parallel = parallel / 1000000;
        unitsParallel = "MOhms";
    } else if (parallel >= 1000){
       parallel = parallel / 1000;
       unitsParallel = "KOhms";
    } else if (parallel < 1000){
        parallel = parallel / 1;
        unitsParallel = "Ohms";
    } else {}
    
    //Outputs the value in ohms of resistor 1 and 2 with the accurate units.
      printf("\nValue in ohms of resistor 1: ");
      printf("%.2f %s %s \n", resistance1, unitsR1, tolerance1);
      printf("\nValue in ohms of resistor 2: \n");
      printf("%.2f %s %s \n", resistance2, unitsR2, tolerance2);
    
      printf("\n");
    
    //Prints the equivalent in series and parallel with the accurate units. 
      printf("The Equivalent in series is %.2f %s \n", series, unitsSeries);
      printf("The Equivalent in parallel is %.2f %s \n", parallel, unitsParallel);
      
    return 0;
}
