#include <stdio.h>
#include <string.h>
int main()
{
    setvbuf(stdin, 0, 2, 0);
    setvbuf(stdout, 0, 2, 0);
    while (1)
    {
        char str[101] = {
            0,
        };
        scanf("%[^.\n]", str);
        printf("%s",str);
        sleep(1);
        if (!strcmp(".", str))
            break;
        int s = 0, b = 0;
        int str_len = strlen(str);
        for (int i = 0; i < str_len; i++)
        {
            if (str[i] == '(')
            {
                s += 1;
            }
            else if (str[i] == ')')
            {
                if (s != 0)
                    s -= 1;
                else
                {
                    printf("no\n");
                    break;
                }
            }
            else if (str[i] == '[')
            {
                b += 1;
            }
            else if (str[i] == ']')
            {
                if (b != 0)
                    b -= 1;
                else
                {
                    printf("no\n");
                    break;
                }
            }
        }
        if (s != 0 || b != 0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}