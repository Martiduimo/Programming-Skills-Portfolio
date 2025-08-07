// 05-DaysOfTheMonth
// This program returns the number of days in a month.

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month == 2)
        cout << "28 days" << endl;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "30 days" << endl;
    else if (month >= 1 && month <= 12)
        cout << "31 days" << endl;
    else
        cout << "Invalid month number!" << endl;

    return 0;
}
