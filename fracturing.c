#include <stdio.h>
#include <math.h>
// this program uses these libraries 


// declare a preprocessor directive for PI 
#define PI  3.14159


// declare all of the functions we are going to be using
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// calling the functions to main
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}


// distance function
 double calculateDistance(){

    //collecting user input for the varaibles
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // defining the distance formula, we are going to be using the sqrt and pow 
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 

    // printing the user output
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #1 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
 }


 // perimeter function
 double calculatePerimeter(){

    //identifing the raduis and peremeter formlas and using the calculate distance and then dividing it by 2 to get the radius
    double radius = calculateDistance() / 2;
    double perimeter = 2 * PI * radius; 


    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);// using 0.0 for the points
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", 0.0, 0.0);// doing the same thing here
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);


    // honestly It took a little while to figure out how I was going to using the CalculateDistance to help me with the perimeter but once I figure that out it wasnt too bad
    return 3;
 }

double calculateArea(){

    // the variables declared
    double radius = calculateDistance() / 2;
    double area = PI * pow(radius, 2);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", 0.0, 0.0);
    printf("The area of the city encompassed by your request is %.2f\n", area);


    // okay so this one wasnt as challenging as the last one because I fgured out how to use the calculatedistance function
    return 2;
}

double calculateWidth(){

    // identifying the variables 
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", 0.0, 0.0);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // was the same things as the other ones so not challenging
    return 1;
}

double calculateHeight(){

    // identifying the variables 
    double y1 = askForUserInput();
    double y2 = askForUserInput();
    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", 0.0, 0.0);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // it was the same exact thing as tje other one just with the y cooerdinats 
    return 1; 
}

 double askForUserInput(){
    
    double value; 

    // asking for input from the user 
    printf("Enter a cooerdinate value: ");

    // reads the value from the user and stores it in "value"
    scanf("%lf", &value);

    return value; 
 }
