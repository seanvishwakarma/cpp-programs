/*
Aim: Write a program in C++ to accept length and breadth of a Rectangle, radius of a Circle and calculate the Area of the Rectangle and the Circle by using Function Overloading
*/

#include <iostream>

using namespace std;

int Area(int,int); // Function prototype for Rectangle
float Area(float); // Function prototype for Circle

int main()
{
    int len,bred,area_rec; // Declare variables for Rectangle
    float rad,area_cir; // Declare variables for Circle

    //Take inputs for Rectangle
    cout << "Enter the length of rectangle: ";
    cin >> len;
    cout << "Enter the breadth of reactangel: ";
    cin >> bred;

    //Take inputs for Circle
    cout << "Enter the radius of the circle: ";
    cin >> rad;

    area_rec = Area(len,bred); // Call function for Rectangle
    area_cir = Area(rad); // Call function for Circle

    // Display the Result
    cout << "The Area of the Rectagle is " << area_rec << endl;
    cout << "The area of the Circle is " << area_cir;

    return 0;
}

// Function Definition for Rectangle 
int Area(int l, int b){
    return (l*b); // Area of Rectangle = length * breadth
}

// Function Definition for Circle
float Area(float r){
    return (3.14*r*r); // Area of Circle = 3.14 * r^2
}