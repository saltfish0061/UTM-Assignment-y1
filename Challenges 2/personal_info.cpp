#include <iostream>
#include <limits>
using namespace std;

int main() {
    char name[50], address[150], phone_number[50], college_major[50];

    cout << "Name: ";
    cin.getline(name, 50);  
    cout << "Address: ";
    cin.getline(address, 150);
    cout << "Phone Number: ";
    cin.getline(phone_number, 50);
    cout << "College Major: ";
    cin.getline(college_major, 50);

    return 0;
}