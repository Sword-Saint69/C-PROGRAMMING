/*Write a C program that calculates and prints the result of the following expression:
result = 5 * (6 + 2) / 4 - 3. Explain how parentheses affect the precedence of
operators in this expression.*/

#include <stdio.h>
int main() {
    int result = 5 * (6 + 2) / 4 - 3;
    printf("Result: %d\n", result);
    return 0;
}
