#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int males, females, total_students;
    double male_percentage, female_percentage;

    cout << "Number of males and";
    cout << "females in the class(seperate by space)" << endl;
    cin >> males >> females;

    total_students = males + females;
    male_percentage = static_cast<double>(males) / total_students ; 
    female_percentage = static_cast<double>(females) / total_students;

    cout << "Percentage of males: " << fixed << setprecision(2) << male_percentage * 100 << "%" << endl;
    cout << "Percentage of females: " << fixed << setprecision(2) << female_percentage * 100 << "%" << endl;
    cout << "Total percentage: " << fixed << setprecision(2) << (male_percentage + female_percentage) * 100 << "%" << endl;

    return 0;
}