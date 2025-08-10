#include <iostream>
using namespace std;

int main() {
    // Is it Even?
    int number;
    cin >> number;

    if (number % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
