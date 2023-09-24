# include <stdio.h>

int main() {
    char c = 'a';
    char s[2] = "a";
    printf("%c", c);
    printf("%c", s[0]);
    printf("%s\n", s);
    char hello[10] = "hello"; // hello = {'h', 'e', 'l', 'l', 'o', '\0'}
    char world[10] = "world";
    printf("%s, %s!\n", hello, world);
    char name[10];
    sprintf(name, "%s", "hello world");
    printf("%s", world);
    return 0;
}