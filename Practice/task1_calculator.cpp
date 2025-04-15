#include <iostream>
#include <string>




int main() {
    std::string name;
    double number1, number2;



    std::cout <<"Hello! What's your name? ";
    std::cin >> name;

    std::cout << "welcome, " << name << "!" << std::endl;

    std::cout <<"Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    double sum = number1 + number2;
    double sub = number1 - number2;
    double mult = number1 * number2;
    double div = number1 / number2;

    std::cout << "\nHere are your results:\n";
    std::cout << number1 << " + " << number2 << " = " << sum << std::endl;
    std::cout << number1 << " - " << number2 << " = " << sub << std::endl;
    std::cout << number1 << " * " << number2 << " = " << mult << std::endl;
    std::cout << number1 << " / " << number2 << " = " << div << std::endl;

    return 0;
}