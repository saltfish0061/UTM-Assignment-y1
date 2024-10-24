#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rent, phone, internet, cable;
    cout << "Enter your monthly costs for the following housing-related expenses: " << endl;
    cout << "Rent or mortgage payment: ";
    cin >> rent;
    cout << "Phone: ";
    cin >> phone;
    cout << "Internet service: ";
    cin >> internet;
    cout << "Cable: ";
    cin >> cable;

    double total_monthly = rent + phone + internet + cable;
    double total_annual = total_monthly * 12;

    cout << "The total monthly cost of these expenses is: $" << fixed << setprecision(2) << total_monthly << endl;
    cout << "The total annual cost of these expenses is: $" << fixed << setprecision(2) << total_annual << endl;

    return 0;
}