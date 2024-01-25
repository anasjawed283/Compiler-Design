#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int i = 0, j = 0, x = 0, n;
    void *p, *add[5];
    char ch, b[15], d[15], c;
    char registrationNumber[20]; // Assuming a maximum length for the registration number

    printf("Enter your registration number: ");
    scanf("%s", registrationNumber);

    printf("Expression terminated by $:");
    while ((c = getchar()) != '$')
    {
        b[i] = c;
        i++;
    }
    n = i - 1;
    printf("Given Expression:");
    i = 0;
    while (i <= n)
    {
        printf("%c", b[i]);
        i++;
    }
    printf("\n Symbol Table\n");
    printf("Symbol \t addr \t type");

    while (j <= n)
    {
        c = b[j];
        if (isalpha(c))
        {
            p = malloc(sizeof(char));
            add[x] = p;
            *((char *)p) = c;
            d[x] = c;
            printf("\n%c \t %p \t identifier\n", c, p);
            x++;
            j++;
        }
        else
        {
            ch = c;
            if (ch == '+' || ch == '-' || ch == '*' || ch == '=')
            {
                p = malloc(sizeof(char));
                add[x] = p;
                *((char *)p) = ch;
                d[x] = ch;
                printf("\n %c \t %p \t operator\n", ch, p);
                x++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }

    // Free allocated memory
    for (int k = 0; k < x; k++)
    {
        free(add[k]);
    }
}
