// days_of_the_month.cpp
// Asks user for month number and prints days in that month.
// Note: This version does NOT handle leap years for February.

#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month number!" << endl;
        return 0;
    }

    if (month == 2) {
        cout << "February has 28 days (no leap year logic applied)." << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "That month has 30 days." << endl;
    } else {
        cout << "That month has 31 days." << endl;
    }

    return 0;
}
