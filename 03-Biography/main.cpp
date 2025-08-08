// 03-Biography
// This program collects and displays basic biography information.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hobby;
    int age;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "How old are you? ";
    cin >> age;
    cin.ignore(); // clear input buffer

    cout << "What is your favorite hobby? ";
    getline(cin, hobby);

    cout << "Meet " << name << ", who is " << age << " years old and loves " << hobby << "!" << endl;

    return 0;
}
