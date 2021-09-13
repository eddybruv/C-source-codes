/**
 * Date: 22-07-2021
 * by eddybruv
 * exercise from codechef
**/

#include <stdio.h>

int main(void)
{
	float num;
	scanf("%f", &num);
	float highest_div;
	for (int i = 0; i < 11; i++)
	{
		if (((int)num % i) == 0)
			highest_div = i;
		break;
	}
	printf("%d", (int)highest_div);
	return 0;
}