#include <iostream>

void printStars(int star) {
    for (int i = 0; i < star; i++) {
        std::cout << "*\n";
    }
}


int main() {

    int star;

    std::cout <<"how manny stars do you want?";
    std::cin >> star;

    printStars(star);



    return 0;
}