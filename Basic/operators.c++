#include <iostream>
using namespace std;

//operators in C++ are symbols that perform operations on variables and values.
// C++ supports various types of operators, including:

int main() {
    // -------- Arithmetic Operators --------
    int a = 10, b = 5;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // -------- Comparison Operators --------
    cout << (a == b) << endl; // Equal to
    cout << (a != b) << endl; // Not equal to
    cout << (a > b) << endl;  // Greater than
    cout << (a < b) << endl;  // Less than
    cout << (a >= b) << endl; // Greater than or equal to
    cout << (a <= b) << endl; // Less than or equal to

    return 0;
}