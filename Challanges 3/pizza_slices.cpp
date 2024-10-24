#include <iostream>
#include <cmath>
using namespace std;

int main (){

    const double PI = 3.14;
    double diameter; //pizza diameter
    cout << "Enter the diameter of the pizza(inches): ";
    cin >> diameter;
    double radius = diameter / 2;
    //Area of the pizza
    double area = PI * pow(radius, 2);
    //Area of a slice
    double slice_area = 14.125;

    //Number of slices
    int slices = area / slice_area; //rounding down

    cout << "The number of slices in the pizza is: " << slices << endl;

    return 0;
    
}