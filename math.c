# include <stdio.h>
# include <math.h>

int main() {
    int x = 5;
    int y = 2;
    int sum = x / y;
    int sum2 = pow(x, y); // pow is a function from math.h // pow(x, y) is x^y
    // int function(x) = x ^ 2 + 2 * x + 1; // f(x) = x^2 + 2x + 1
    printf("Sum of x and y is: %d\n", sum); // output: Sum of x and y is: 30
    printf("Sum of x and y is: %d\n", sum2); // output: Sum of x and y is: 25
    return 0;
}