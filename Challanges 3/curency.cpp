#include <iostream>
#include <iomanip>
using namespace std;

//define constants
#define YEN_PER_DOLLAR 111
#define EUROS_PER_DOLLAR 0.86

int main() {
    double amount;
    cout << left << setw(8) << "Dollars" << ": $";
    cin >> amount;

    cout << fixed << setprecision(2);
    cout << left <<  setw(8) << "Yen"<< ": " << amount * YEN_PER_DOLLAR << "¥" <<endl;
    cout << left <<  setw(8) << "Euros"<< ": " << amount * EUROS_PER_DOLLAR << "€" <<endl;

    return 0;

}
