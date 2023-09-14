# include <stdio.h>
# include <math.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int main() {
    printf("Hello World!\n"); // output: Hello World! /* \n is a new line */
    printf("Hello guy\n"); // output: Hello guy
    int num = 10; // int is a number without a decimal point
    float num2 = 10.5; // float is a number with a decimal point
    char c = 'a'; // char is a single character
    printf("Value of num is: %d\n", num); // output: Value of num is: 10
    printf("Value of num2 is: %f\n", num2); // output: Value of num2 is: 10.500000
    printf("Value of num2 is: %.1f\n", num2); // output: Value of num2 is: 10.5
    printf("Value of c is: %c\n", c); // output: Value of c is: a

    int x = 5;
    int y = 2;
    int sum = x / y;
    printf("Sum of x and y is: %d\n", sum); // output: Sum of x and y is: 30

    int day = 4;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
    }
    return 0;
}