#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    c = c - 'a' + 'A';

    printf("%c\n", c);

    return 0;
}