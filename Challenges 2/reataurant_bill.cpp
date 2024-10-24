#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float meal_cost, tax, tip, taxed_meal_cost, tax_amount, tip_amount, total_bill;
    meal_cost = 44.50f;
    tax = 6.75f; // in percentage
    tip = 15.00f; // in percentage
    taxed_meal_cost = meal_cost + (meal_cost * tax / 100);
    tax_amount = meal_cost * tax / 100;
    tip_amount = taxed_meal_cost * tip / 100;
    total_bill = taxed_meal_cost + tip_amount;

    //Mathematical rounding to 2 decimal places
    cout << "Meal cost : $" << round(meal_cost * 100.0) / 100.0 << endl;
    cout << "Tax amount: $" << round(tax_amount * 100.0) / 100.0 << endl;
    cout << "Tip amount: $" << round(tip_amount * 100.0) / 100.0 << endl;
    cout << "Total bill: $" << round(total_bill * 100.0) / 100.0 << endl;
    return 0;
}