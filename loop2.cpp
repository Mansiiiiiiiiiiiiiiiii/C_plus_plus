#include <iostream>

int main() {
    int num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;

    std::cout << "Binary equivalent: ";
    while (num > 0) {
        std::cout << (num % 2);
        num /= 2;
    }
    std::cout << std::endl;

    return 0;
}
