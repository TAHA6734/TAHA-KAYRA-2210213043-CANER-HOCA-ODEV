#include <stdio.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, numDigits = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Find the last digit
    lastDigit = num % 10;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    // Reset num to the original number
    num = originalNum;

    // Find the first digit by repeatedly dividing by 10
    firstDigit = num;
    for (int i = 0; i < numDigits - 1; i++) {
        firstDigit /= 10;
    }
    firstDigit = firstDigit % 10;

    // Swap the first and last digits
    int swappedNum = lastDigit;
    for (int i = 0; i < numDigits - 2; i++) {
        swappedNum = swappedNum * 10 + num % 10;
        num /= 10;
    }
    swappedNum = swappedNum * 10 + firstDigit;

    printf("Number with first and last digits swapped: %d\n", swappedNum);

    return 0;
}













