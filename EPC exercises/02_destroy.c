/**
 * Date: 03-10-2021
 * by eddybruv
 **/

void destroy(int *numbers, int a, int b)
{
    int new[6];
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == a || numbers[i] == b)
            continue;
        new[i] == numbers[i];
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", new[i]);
}