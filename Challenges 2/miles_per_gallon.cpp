#include <iostream>
using namespace std;

int main(){

    double gallons, miles, miles_per_gallon;
    gallons = 16;
    miles = 312;

    miles_per_gallon = miles / gallons;
    cout << "The car's miles-per-gallon is: " << miles_per_gallon << endl;
    return 0;
}