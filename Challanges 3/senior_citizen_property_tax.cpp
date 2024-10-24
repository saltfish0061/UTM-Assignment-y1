#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double actual_value, tax_rate;
    cout << "Actual value of the property: $";
    cin >> actual_value;
    cout << "Tax rate for each $100 of assessed value: $";
    cin >> tax_rate;

    double senior_citizen_reduction_rate = 89800.0 / 94800;

    actual_value *= senior_citizen_reduction_rate; // update actual value in calculation after reduction

    double assessed_value = actual_value * 0.6;
    double property_tax = (assessed_value / 100) * tax_rate;
    double quarterly_tax = property_tax / 4;
    
    cout << fixed << setprecision(2);
    cout << "Annual property tax of the property: $" << property_tax << endl;
    cout << "Quarterly property tax of the property: $" << quarterly_tax << endl;
    
    return 0;
}