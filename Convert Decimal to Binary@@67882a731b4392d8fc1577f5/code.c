#include <stdio.h>

void printBinary(int num) {
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Edge case: If number is 0, print 0
    if (num == 0) {
        printf("0\n");
        return;
    }

    // Extract bits using bitwise AND and right shift
    while (num > 0) {
        binary[i] = num & 1; // Get the least significant bit (LSB)
        num >>= 1; // Right shift to process next bit
        i++;
    }

    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
