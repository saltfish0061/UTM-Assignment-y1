#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string month, year;
    double total_amount_collected;
    double state_tax = 0.04;
    double county_tax = 0.02;
    
    cout << "Tax report listing" << endl;
    cout << "Month: ";
    getline(cin, month);
    cout << "Year: "; 
    getline(cin, year);
    cout << "Total amount collected: ";
    cin >> total_amount_collected;

    double total_sales = total_amount_collected / 1.06;
    double state_sales_tax = total_sales * state_tax;
    double county_sales_tax = total_sales * county_tax;

    cout << "\n\nMonth: " << month << " " << year << endl;
    cout << "--------------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << left << setw(20) << "Total collected "<< ": $" << right << setw(12) << total_amount_collected << endl;
    cout << left << setw(20) << "Sales "<< ": $" << right << setw(12) <<  total_sales << endl;
    cout << left << setw(20) << "County Sales Tax "<< ": $" << right << setw(12) <<  county_sales_tax << endl;
    cout << left << setw(20) << "State Sales Tax "<< ": $" << right << setw(12) <<  state_sales_tax << endl;
    cout << left << setw(20) << "Total Sales Tax "<< ": $" << right << setw(12) << state_sales_tax + county_sales_tax << endl;
    
    return 0;


}