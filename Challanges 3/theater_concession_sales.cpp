#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double evening_income = 10.00 + 6.50;
    double matinee_income = 3.00 + 8.50;

    double evening_ticket_income = 10.00 / evening_income * 100;
    double matinee_ticket_income = 3.00 / matinee_income * 100;

    double evening_concession_income = 6.50 / evening_income * 100;
    double matinee_concession_income = 8.50 / matinee_income * 100;

    cout << fixed << showpoint << setprecision(2);
    //Evening
    cout << "Evening" << endl;
    cout << "Show Income: $" << evening_income << endl;
    cout << "Ticket Income: " << evening_ticket_income << "%" << endl;
    cout << "Concession Income: " << evening_concession_income << "%" << endl;
    //Manitee
    cout << "\nManitee" <<endl;
    cout << "Income: $" << matinee_income << endl;
    cout << "Ticket Income: " << matinee_ticket_income << "%" << endl;
    cout << "Concession Income: " << matinee_concession_income << "%" << endl;

    return 0;
}
