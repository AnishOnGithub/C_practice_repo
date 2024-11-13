#include <stdio.h>

void naturalNumbers(int startDigit, int endDigit) {
    int i;
    for(i = startDigit; i <= endDigit; i++) {
        printf("%d ", i);
    }
}

int main() {
    int startDigit, endDigit;
    printf("Enter the first and last number: ");
    scanf("%d %d", &startDigit, &endDigit);
    naturalNumbers(startDigit, endDigit);
    return 0;
}
