// primitive_quiz.cpp
// Shows C++ primitive types and their sizes

#include <iostream>
#include <limits>   // optional: numeric_limits
using namespace std;

int main() {
    cout << "Size of char:    " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of short:   " << sizeof(short) << " byte(s)" << endl;
    cout << "Size of int:     " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of long:    " << sizeof(long) << " byte(s)" << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "Size of float:   " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double:  " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of bool:    " << sizeof(bool) << " byte(s)" << endl;

    // Example of value limits (optional)
    cout << "\nint min: " << numeric_limits<int>::min()
         << ", int max: " << numeric_limits<int>::max() << endl;

    return 0;
}
