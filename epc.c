/**
 * Date: 17-09-2021
 * by eddybruv
 **/

#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, n, comb = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Number is incorrect.\n");
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }
    printf("\n");

    for (a = 0; a <= n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            for (c = 0; c <= n; c++)
            {
                if ((a + b + c) == n)
                {
                    printf("%d + %d + %d = %d\n", a, b, c, n);
                    comb += 1;
                    continue;
                }
            }
        }
    }

    printf("\n%d total combinations", comb);
    return 0;
}

