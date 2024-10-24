#include <iostream>
using namespace std;

int main() {
    double annualPay = 39000;
    double payPeriodGrossPayTwice = annualPay / 24;
    double payPeriodGrossPayBiWeekly = annualPay / 26;

    cout << "The pay period gross pay if he is paid twice a month: $" << payPeriodGrossPayTwice << endl;
    cout << "The pay period gross pay if he is paid bi-weekly: $" << payPeriodGrossPayBiWeekly << endl;

    return 0;
}