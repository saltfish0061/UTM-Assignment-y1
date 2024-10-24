#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string month1, month2, month3;
    double rain1, rain2, rain3, average;
    cout << "First month: ";
    cin >> month1;
    cout << "Rain in inches: ";
    cin >> rain1;
    cout << "Second month: ";
    cin >> month2;
    cout << "Rain in inches: ";
    cin >> rain2;
    cout << "Third month: ";
    cin >> month3;
    cout << "Rain in inches: ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3;

    cout << "The average monthly rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << fixed << setprecision(2) << average << " inches." << endl;

    return 0;
}