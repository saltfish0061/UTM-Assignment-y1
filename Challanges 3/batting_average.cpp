#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number_bat , number_hits;
    cout << "Enter the number of number at the bats and";
    cout << " the number of hits: " << endl;

    cin >> number_bat >> number_hits; // read two input in a line

    double bat_avg = static_cast<double>(number_hits) / number_bat ; //change int to double to get the decimal value within the calculation

    cout << "The batting average is: " << fixed << setprecision(3) << bat_avg << endl;

    return 0;   
    
}