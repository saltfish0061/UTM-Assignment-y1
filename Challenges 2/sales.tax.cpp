#include <iostream>
using namespace std;

int main(){

    double total_purchase, state_tax, county_tax, total_tax, total_price;
    total_purchase = 95.00;
    //get the tax value in percentage
    state_tax = 6.5;
    county_tax = 2.0;
    total_tax = state_tax + county_tax;
    //formula to calculate the total price by converting tax percentage to decimal
    total_price = total_purchase * (1 + total_tax / 100);

    cout << "Purchase price: $" << total_purchase << endl;
    cout << "Total tax: " << total_tax << "%" << endl;
    cout << "Total price: $" << total_price << endl;
    return 0;
}