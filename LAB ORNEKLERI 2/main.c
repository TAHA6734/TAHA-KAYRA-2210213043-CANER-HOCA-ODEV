#include <stdio.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, numDigits = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;


    lastDigit = num % 10;


    while (num != 0) {
        num /= 10;
        numDigits++;
    }


    num = originalNum;


    firstDigit = num;
    for (int i = 0; i < numDigits - 1; i++) {
        firstDigit /= 10;
    }
    firstDigit = firstDigit % 10;


    int swappedNum = lastDigit;
    for (int i = 0; i < numDigits - 2; i++) {
        swappedNum = swappedNum * 10 + num % 10;
        num /= 10;
    }
    swappedNum = swappedNum * 10 + firstDigit;

    printf("Number with first and last digits swapped: %d\n", swappedNum);

    return 0;
}













