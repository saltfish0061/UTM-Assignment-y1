#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Ingredients for 48 cookies
    int cookies = 48;
    double sugar = 1.5; //cup
    double butter = 1; //cup
    double flour = 2.75; //cup

    //Ingredients for 1 cookie
    double sugarPerCookie = sugar / cookies;
    double butterPerCookie = butter / cookies;
    double flourPerCookie = flour / cookies;

    int num_cookie; //specified number of cookies
    cout << "Enter the number of cookies you want to make: ";
    cin >> num_cookie;

    cout << showpoint << endl;
    cout << left << setw(8) << "Sugar " << " : " << sugarPerCookie * num_cookie << " cups" << endl;
    cout << left << setw(8) << "Butter " << " : " << butterPerCookie * num_cookie << " cups" << endl;
    cout << left << setw(8) << "Flour " << " : " << flourPerCookie * num_cookie << " cups" << endl;

    return 0;
}
