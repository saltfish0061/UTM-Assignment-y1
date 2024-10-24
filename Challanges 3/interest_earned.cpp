
#include <iostream>
#include <iomanip>  
#include <cmath>
using namespace std;

int main() {
    double rate, times,principal, interest, final_balance;
    cout << left << setw(20) << "Interest Rate: ";
    cin >> rate;
    cout << left << setw(20) << "Times Compounded: ";
    cin >> times;
    cout << left << setw(20) << "Principal: ";
    cout << "$";
    cin >> principal;
    final_balance = principal * pow(1 + rate * 1e-2 / times, times);
    interest = final_balance - principal;

    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Interest(%): " << "$" << interest << endl;
    cout << left << setw(20) << "Final Balance: " << "$" << final_balance << endl;
    
    
    return 0;
}