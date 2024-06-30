#include <iostream>
using namespace std;

// Function declarations
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main() {
    int choice;
    double num1, num2, result;
    bool continueCalculating = true;

    while (continueCalculating) {
        // Display menu
        cout << "Basic Calculator\n";
        cout << "Select an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform operation based on user's choice
        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = addition(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = subtraction(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = multiplication(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = division(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 5:
                continueCalculating = false;
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        // Ask if user wants to perform another calculation
        if (continueCalculating) {
            char anotherCalculation;
            cout << "Do you want to perform another calculation? (y/n): ";
            cin >> anotherCalculation;
            if (anotherCalculation == 'n' || anotherCalculation == 'N') {
                continueCalculating = false;
                cout << "Exiting the calculator. Goodbye!" << endl;
            }
        }
    }

    return 0;
}

// Function definitions
double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

