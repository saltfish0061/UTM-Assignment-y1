#include <iostream>
using namespace std;

int main() {

    int total_customers = 16500;
    int customers_purchase_energy_drinks = total_customers * 0.15;
    int customers_prefer_citrus_flavor = customers_purchase_energy_drinks * 0.52;

    cout << "Approximate number of customers who purchase energy drinks: " << customers_purchase_energy_drinks << endl;
    cout << "Approximate number of customers who prefer citrus flavor: " << customers_prefer_citrus_flavor << endl;
}