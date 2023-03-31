#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    double add(double n1, double n2){
        return n1 + n2;
    }

    double subtract(double n1, double n2){
        return n1 - n2;
    }

    double multiply(double n1, double n2){
        return n1 * n2;
    }

    double divide(double n1, double n2){
        if (n2 == 0) {
            cout << "This division is undefined because we don't have a number divided by zero." << endl; 
            return 0;
        } 
        return n1 / n2;
    }

    double exponential (double n1, double n2){
        return pow(n1, n2);
    }

    double squareRoot(double n1){
        return pow(n1, 0.5);
    }
};

int main() {
    Calculator cal;
    double num1, num2;
    int operat;
    cout << "Enter the first number: ";
    cin >> num1;
    do {
        cout << "1. Add(+)\n2. Subtraction(-)\n3. Multiply(*)\n4. Division(/)\n5. Exponential(** or ^)\n6. Square Root\n" << "Enter the number of operator: ";
        cin >> operat;
        if (operat != 1 && operat != 2 && operat != 3 && operat != 4 && operat != 5 && operat != 6){
            cout << "Invalid operator. Try again: " << endl;
        }
    } while (operat != 1 && operat != 2 && operat != 3 && operat != 4 && operat != 5 && operat != 6);

    double result;
    if(operat == 6){
        result = cal.squareRoot(num1);
        cout << "The result is: " << result;
        return 0;
    }
    cout << "Enter the second number: ";
    cin >> num2;
    switch(operat){
        case 1:
            result = cal.add(num1, num2);
            break;
        case 2:
            result = cal.subtract(num1, num2);
            break;
        case 3:
            result = cal.multiply(num1, num2);
            break;
        case 4:
            result = cal.divide(num1, num2);
            break;
        case 5:
            result = cal.exponential(num1, num2);
            break;
    }
    cout << "The result is: " << result;
}