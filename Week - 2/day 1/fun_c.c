#include <stdio.h>

void addAndPrint(int a, int b) {
    int sum = a + b;
    printf("The sum is: %d\n", sum);
}

int main() {
    int num1 = 10;
    int num2 = 20;

    addAndPrint(num1, num2);

    return 0;
}
