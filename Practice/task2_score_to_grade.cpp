#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout <<"Hello! What's your name? ";
    std::cin >> name;

    std::cout << "welcome, " << name << "!" << std::endl;



    double grade;
    std::cout <<"What's your grade? ";
    std::cin >> grade;


    std::cout <<"result: ";

    if (grade >= 9) {
        std::cout <<"Excellent!";
    } else if (grade >= 8) {
        std::cout <<"Very Good!";
    } else if (grade >= 7) {
        std::cout <<"Good!";
    } else if (grade >= 6) {
        std::cout <<"Sufficient";
    } else if (grade < 6) {
        std::cout <<"insufficient!";
    }

    return 0;
}