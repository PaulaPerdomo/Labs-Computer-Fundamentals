//
//  main.c
//  Lab4
//
//  Created by Maria Paula Perdomo on 2020-02-07.
//  Copyright © 2020 Maria Paula Perdomo. All rights reserved.
//

#include <stdio.h>

//Lab4
//Maria Paula Perdomo 1005974313

//Function provided in Lab4 to calculate the owedAmount.
double owedAmount(double interest, double owedFromPreviousMonth, double purchases, double monthlyPayment) {
    double amountDue;
    amountDue = owedFromPreviousMonth + purchases + ((owedFromPreviousMonth + purchases) * interest) - monthlyPayment; //Equation calculating the amount owed.
    
    if(amountDue < 0) {
        amountDue = 0.00; //The equation can calulate negative values, therefore it must be ignored.
    } return amountDue;
}

int main() {
    
    //Declaring the variables.
    int numberMonths;
    double amountOwed, purchaseAmount, monthlyPayment, yearlyInterest, purchaseValue = 0, totalInterest = 0;

    //User inputs the following data.
    printf("Enter amount already owed on card: ");
    scanf("%lf", &amountOwed);
    printf("Enter purchase amount per month: ");
    scanf("%lf", &purchaseAmount);
    printf("Enter payment amount per month: ");
    scanf("%lf", &monthlyPayment);
    printf("Enter yearly interest rate as percent: ");
    scanf("%lf", &yearlyInterest);
    printf("Enter number of months to consider: ");
    scanf("%d", &numberMonths);
    
    yearlyInterest = ((yearlyInterest / 12) / 100); //Changes the interest from year to months, as well as percentage.
    purchaseValue = amountOwed + purchaseAmount * numberMonths; //The total purchase value is  calculated.
    
    //For loop is used to calculate the following data, looping through each month.
    for(int i = 1; i <= numberMonths; i++) {
        
        //Describes the following 3 scenarios.
        if((amountOwed == 0) && (purchaseAmount == monthlyPayment)) {
            totalInterest = 0.00;
        } else if((amountOwed == 0) && (purchaseAmount > monthlyPayment)) {
            totalInterest += purchaseAmount * yearlyInterest;
            amountOwed = owedAmount(yearlyInterest, amountOwed, purchaseAmount, monthlyPayment);
        } else if (amountOwed != 0) {
            totalInterest += (purchaseAmount + amountOwed) * yearlyInterest;
            amountOwed = owedAmount(yearlyInterest, amountOwed, purchaseAmount, monthlyPayment);
    }
}
    //Prints the outputs.
    printf("Total purchased value: %.2lf\n", purchaseValue);
    printf("Total interest charges: %.2lf\n", totalInterest);
    return 0;
    
}


        
        
        
        
        
        
        
       

