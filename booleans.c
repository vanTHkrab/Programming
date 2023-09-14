# include <stdio.h>
# include <stdbool.h>

int main() {
    bool isTrue = true;
    bool isFalse = false;
    printf("isTrue: %d\n", isTrue);

    int x = 5;
    int y = 2;
    int sum = x / y;
    bool isSum = sum == 2;
    printf("isSum: %d\n", isSum);

    const int num = 5; // const is a constant variable
    int sum2 = num + 2;
    if (sum2 == 7) {
        printf("sum2 is equal to 7\n");
    } else {
        printf("sum2 is not equal to 7\n");
    }  
}