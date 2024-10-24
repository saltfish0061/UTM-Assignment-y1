#include <iostream>
using namespace std;

int main()
{ 
    double miles, gallons, mpg;
    cout << "Enter miles driven: ";
    cin >> miles;
    cout << "Enter gallons used: ";
    cin >> gallons;
    mpg = miles / gallons;
    cout << "Miles per gallon: " << mpg << endl;
   
    return 0;

} 
