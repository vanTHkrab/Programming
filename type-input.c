# include <stdio.h>

int main() {
    int x, b;
    printf("input heiht: ");
    scanf("%d", &x);
    printf("input base: ");
    scanf("%d", &b);
    int area = x * b;
    printf("Area of triangle is: %d\n", area);
}