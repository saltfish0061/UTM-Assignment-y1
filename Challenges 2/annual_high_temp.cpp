#include <iostream>
using namespace std;

int main() {
    double new_york_temp = 85;
    double denver_temp = 88;
    double pheonix_temp = 106;
    double rise = 0.02;

    new_york_temp += new_york_temp * rise;
    denver_temp += denver_temp * rise;
    pheonix_temp += pheonix_temp * rise;

    cout << "New York City's new average high July temperature: " << new_york_temp << " degrees Fahrenheit" << endl;
    cout << "Denver's new average high July temperature: " << denver_temp << " degrees Fahrenheit" << endl;
    cout << "Pheonix's new average high July temperature: " << pheonix_temp << " degrees Fahrenheit" << endl;

    return 0;
}
