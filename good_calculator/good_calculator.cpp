#include <iostream>

using namespace std;

int main() 
{
    double num1, num2;
    char operation;
    double result;
    char choice;

    do {
        cout << "Enter the first number:" << endl;
        cin >> num1;

        cout << "Enter the second number:" << endl;
        cin >>num2;

        cout << "Enter the operation (+, -, *, /):" << endl;
        cin >> operation;

        switch (operation) 
        {
            case '+':
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
            if (num2 == 0) 
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else 
            {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
            default:
            cout << "Error: Invalid operation." << endl;
            break;
        }
        cout << "Do you want to continue (y/n)?" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;

    return 0;
}

