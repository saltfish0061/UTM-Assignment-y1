#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double actual_value, assessed_value, tax_rate, property_tax;
    cout << "Actual value of the property: $";
    cin >> actual_value;
    cout << "Tax rate for each $100 of assessed value: $";
    cin >> tax_rate;
    assessed_value = actual_value * 0.6;
    property_tax = (assessed_value / 100) * tax_rate;
    cout << fixed << setprecision(2);
    cout << "Annual property tax of the property: $" << property_tax << endl;
    return 0;
}