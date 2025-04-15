#include <iostream>
#include <string>

int main() {

    std::string first_name;
    std::string last_name;

    std::cout <<"Hello wat is your first name";
    std::cin >> first_name;


    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "And your last name? ";
    std::getline(std::cin, last_name);


    std::cout <<"your name is " + first_name + " " + last_name;


    double number1;
    double number2;

    std::cout <<"\nchoice your first number";
    std::cin >> number1;

    std::cout <<"choice your second number";
    std::cin >> number2;

    std::cout <<"\nChoice an Number\n";
    std::cout <<"1 - Addition" << std::endl;
    std::cout <<"2 - Subtraction" << std::endl;
    std::cout <<"3 - Multiplication" << std::endl;
    std::cout <<"4 - Division" << std::endl;

    double methode;

    std::cin >> methode;

    std::cout <<"your choice: " << methode << std::endl;

    double sum = number1 + number2;
    double sub = number1 - number2;
    double mult = number1 * number2;
    double div = number1 / number2;

    if (methode == 1) {
        std::cout << number1 << " + " << number2 << " = " << sum;
    } else if (methode == 2) {
    std::cout << number1 << " - " << number2 << " = " << sub;
    } else if (methode == 3) {
    std::cout << number1 << " * " << number2 << " = " << mult;
    } else if (methode == 4) {
    std::cout << number1 << " / " << number2 << " = " << div;
    } else {
        std::cout << "invalid choice" << std::endl;
    }








    return 0;
}
