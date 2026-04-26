#include <iostream> 
using namespace std; 

int main() {
    // -------- If-Else Program --------
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 0) {
        cout << "Positive" << endl;
    } else if(num < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }

    // -------- Ternary Operator Program --------
    int a, b;
    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    string result = (a > b) ? "a is greater" : "b is greater"; //it is a ternary oprator which is a shorter way of writing a if else statement. 
    cout << result;

    return 0;
}