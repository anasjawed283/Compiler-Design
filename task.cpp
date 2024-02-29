//Author - Anas Jawed
//Date - 28/02/2024
//21BRS1336- ANAS JAWED

#include <iostream>

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    for (int i = 0; i < 10; i++) {
        int reversed = reverseNumber(num);
        num = num + reversed;
        num = reverseNumber(num);
    }

    std::cout << "Final result after 10 iterations: " << num << std::endl;

    return 0;
}
