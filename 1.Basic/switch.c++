#include <iostream>
using namespace std;


//switch statement in cpp is a control statement that allows you to execute diffferent parts of code based on the value of an expression. 

/*switch(expression) {
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code (if no case matches)
}
*/

#include <iostream>
using namespace std;

int main() {
    // -------- Day Program --------
    int day;
    cout << "Enter day number (1-3): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    // -------- Calculator Program --------
    int a, b;
    char op;

    cout << "\nEnter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+':
            cout << "Result: " << a + b;
            break;
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
            cout << "Result: " << a / b;
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}