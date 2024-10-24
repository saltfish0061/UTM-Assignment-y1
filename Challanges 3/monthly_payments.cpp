#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double L, Rate;
    int N;

    //each alphabet represents the meaning refer to each cout
    cout << "Loan amount: ";
    cin >> L;
    cout << "Monthly interest rate: ";
    cin >> Rate;
    cin.ignore();
    cout << "Number of payments: ";
    cin >> N;

    Rate /= 100;
    double monthlyPayment = (Rate * L * pow(1 + Rate, N)) / (pow(1 + Rate, N) -  1);
    double amountPaidBack = monthlyPayment * N;
    double interestPaid = amountPaidBack - L;

    cout << fixed << setprecision(2);
    cout << "\n************************************" << endl;
    cout << left << setw(20) << "Loan Amount: $" << right << setw(20) << L << endl;
    cout << left << setw(20) << "Monthly Interest Rate: " << right << setw(16) << Rate * 100 << "%" << endl;
    cout << left << setw(20) << "Number of Payments: " << right << setw(20) << N << endl;
    cout << left << setw(20) << "Monthly Payment: $" << right << setw(20) << monthlyPayment << endl;
    cout << left << setw(20) << "Amount Paid Back: $" << right << setw(20) << amountPaidBack << endl;
    cout << left << setw(20) << "Interest Paid: $" << right << setw(20) << interestPaid << endl;

    return 0;
}