/******************************************************************************

 CSCI 1101 - Calculator (Part C)

 Team Coordinator: [Student's name]

 Collaborator #1: [Student's name]
 Collaborator #2: [Student's name]

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

double sq(double a);
double sqroot(double a);

int main() {
    double num1;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (^, s): ";
    cin >> operation;

    double result;

    switch (operation) {
    case '^':
        result = sq(num1);
        break;
    case 's':
        result = sqroot(num1);
        break;
    default:
        cerr << "Error: Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

// Feature 5: Square function.
// Created by: [Collaborator #1]
double sq(double a) {
    return a * a;
}

// Feature 6: Square Root. Use the pre-defined function: sqrt(x)
// Created by: [Collaborator #2]
double sqroot(double a) {
    return sqrt(a);
}


