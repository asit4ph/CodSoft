#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "\n\n********** SIMPLE CALCULATOR **********\n\n";
     cout<<"Choose an option!!! \n"; 
    cout<<"1.Addtion          2.Substraction\n";
    cout<<"3.Multiplication   4.Division\n";
   
    cin>>operation;
    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;

    switch (operation) {
        case '1':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;

        case '2':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;

        case '3':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;

        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result;
            } else {
                cout << "Error: Division by zero!";
            }
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
