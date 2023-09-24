// input number 1-99, If number have 7 in it print BUZZ, else If mod 7 = 0 print BUZZ-BUZZ, else print number
# include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0 && num < 100) { // 1-99 and && is "and"
        if (num == 70 || num % 10 == 7) { // || is "or"
            printf("BUZZ\n");
        }
        else if (num % 7 == 0 && num != 0) {
            printf("BUZZ-BUZZ\n");
        }
        else {
            printf("%d\n", num);
        }
    }
    else {
        printf("Invalid number, Input Number between 1-99 \n");
    }
    return 0;
}