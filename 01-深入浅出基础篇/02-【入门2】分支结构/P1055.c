#include <stdio.h>

int main()
{
    char s[20];
    scanf("%s", s);

    int sum = 0;
    int k = 1;

    for (int i = 0; i < 11; i++)
    {
        if (s[i] != '-')
        {
            sum += (s[i] - '0') * k;
            k++;
        }
    }

    int r = sum % 11;

    char check;

    if (r == 10)
        check = 'X';
    else
        check = r + '0';

    if (s[12] == check)
    {
        printf("Right\n");
    }
    else
    {
        s[12] = check;
        printf("%s\n", s);
    }

    return 0;
}