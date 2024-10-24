#include <iostream>
using namespace std;

int main() {

    double squareFeet_per_land = 43450;
    double tract_of_land = 869 * 360;

    double number_of_acres = tract_of_land / squareFeet_per_land;
    cout << "The number of acres in a tract of land is: " << number_of_acres << endl;
    return 0;
}