#include "iostream"
#include "vector"

int main() {
    std::cout << "Enter a random integer between 0 and 100: " << "\n";
    bool test = false;
    int userRandom;
    while (!test) {
        std::cin >> userRandom;
        if (userRandom <= 0 || userRandom >= 100) {
            std::cout << "the number must be between 0 and 100" << "\n";
        } else {
            test = true;
        }
    }
    std::cout << "Your number is : " << userRandom << "\n";
}
