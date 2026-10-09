#include <stdio.h>
#include <stdlib.h>

char s[70000];
int cnt = 0;

void play(int limit)
{
    int w = 0, l = 0;

    for (int i = 0; i < cnt; i++)
    {
        if (s[i] == 'W')
            w++;
        else
            l++;

        if ((w >= limit || l >= limit) && abs(w - l) >= 2)
        {
            printf("%d:%d\n", w, l);
            w = 0;
            l = 0;
        }
    }

    // 最后一局，即使没打完也要输出
    printf("%d:%d\n", w, l);
}

int main()
{
    char ch;

    while (scanf(" %c", &ch) == 1)
    {
        if (ch == 'E')
            break;

        s[cnt++] = ch;
    }

    play(11);

    printf("\n");

    play(21);

    return 0;
}