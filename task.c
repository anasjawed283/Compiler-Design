//21BRS1336- ANAS JAWED

#include <stdio.h>

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
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        int reversed = reverseNumber(num);
        num = num + reversed;
        num = reverseNumber(num);
    }

    printf("Final result after 10 iterations: %d\n", num);

    return 0;
}
