//
//  main.c
//  Lab5partb
//  Maria Paula Perdomo 1005974313

#include <stdio.h>
#include <math.h>

//Creates the elipse function needed to integrate in terms of y.
double function1(double a, double b, double y) {
    double x = sqrt(a*a*(1-(y*y)/(b*b)));
    return x;
}

//To find the volume of the tank.
void trapezoidalIntegral(double depth, double width, double height, double length, double* integralResult) {
    double deltaY = depth / 10000;
    //Calculates the depth of the tank in n subintervals.
    double y = 0;
    double volume = 0;
    volume += function1(width/2, height/2, -height/2);
    //Calculates the first subinterval.
    for(int i = 1; i < 10000-1; i++) {
        y = -height/2 + i * deltaY;
        volume += 2*(function1(width/2, height/2, y));
        //Calculates from the second to second last subinterval.
    }
    volume += function1(width/2, height/2, -height/2 + depth); //Calculates the last subinterval.
    volume = volume * length * deltaY; //Calculates the total by multiplying it by the inputted length.
        *integralResult = volume; //Stores the volume at the address.
}
    
int main () {

    //Variables are declared with double type.
    double width, height, length, depth, integral = 0;

    //User inputs the following dimensions.
    printf("Enter the width of the tank (in meters): ");
    scanf("%lf", &width);
    printf("Enter the height of the tank (in meters): ");
    scanf("%lf", &height);
    printf("Enter the length of the tank (in meters): ");
    scanf("%lf", &length);
    printf("Enter the specific depth on the measuring stick (in centimeters): ");
    scanf("%lf", &depth);
    
    //Functions is called to calculated the volume. Depth is converted from metres to centimeters.
    trapezoidalIntegral(depth/100, width, height, length, &integral);
    
    //Depth and volume are displayed.
    printf("Depth %.2lf cm : Volume %.2lf cubic meters\n", depth, integral);
    return 0;
            
}
 
            
       

    
   
    
    
    
    
    
    
    
    
    
    

    


