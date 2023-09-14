# include <stdio.h>

int main() 
{
    int h;
    int b;
    printf("Enter a number: ");
    scanf("%d", &h);
    printf("Enter a number: ");
    scanf("%d", &b);
    int area = (h * b) / 2;
    printf("Area of triangle is: %d\n", area);
    return 0;
}