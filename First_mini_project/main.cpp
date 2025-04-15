
#include <iostream>
#include "math_operations.h"

int main() {
    double number1, number2;
    int choice;
    char again;

    std::cout << "=== Welcome to the Calculator! ===\n";

    do {
        std::cout <<"\nEnter the first number: ";
        std::cin >> number1;

        std::cout <<"\nEnter the second number: ";
        std::cin >> number2;

        std::cout <<"\nChoose an operation:\n";
        std::cout <<"1 - Addition\n";
        std::cout << "2 - Subtraction\n";
        std::cout << "3 - Multiplication\n";
        std::cout << "4 - Division\n";
        std::cout <<"Your choice: ";
        std::cin >> choice;

        std::cout << "\nResult: ";
        switch (choice) {
            case 1:
                std::cout << number1 << " + " << number2 << " = " << add(number1, number2);
            break;
            case 2:
                std::cout << number1 << " - " << number2 << " = " << subtract(number1, number2);
            break;
            case 3:
                std::cout << number1 << " * " << number2 << " = " << multiply(number1, number2);
            break;
            case 4:
                if (number2 != 0) {
                    std::cout << number1 << " / " << number2 << " = " << divide(number1, number2);
                } else {
                    std::cout << "Error: Cannot divide by zero!";
                }
            break;
            default:
                std::cout << "Invalid choice.";
        }

        std::cout << "\n\nWould you like to perform another calculation? (y/n): ";
        std::cin >> again;

    } while (again == 'y' || again == 'Y');

    std::cout << "Thanks for using the calculator. Goodbye!\n";

    return 0;


}