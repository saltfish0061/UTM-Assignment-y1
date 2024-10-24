#include <iostream>
using namespace std;

int main(){
    //assign the time taken in minutes to complete each level
    int t_lv1 = 78;
    int t_lv2 = 144;
    int total_time = t_lv1 + t_lv2;

    //convert the time taken in minutes to hours and minutes
    int hour_lv1 = t_lv1 / 60;
    int min_lv1 = t_lv1 % 60;
    int hour_lv2 = t_lv2 / 60;
    int min_lv2 = t_lv2 % 60;
    int hour_total = total_time / 60;
    int min_total = total_time % 60;

    cout << "The time taken to complete level 1 is " << hour_lv1 << " hours " << min_lv1 << " minutes." << endl;
    cout << "The time taken to complete level 2 is " << hour_lv2 << " hours " << min_lv2 << " minutes." << endl;
    cout << "The total time taken to complete both levels is " << hour_total << " hours " << min_total << " minutes." << endl;

    return 0;
}