#include <stdio.h>

int main()
{
    int dailySteps[7] = {6500, 7200, 8100, 9000, 7500, 10000, 8500};
    int i;

    printf("Daily Steps:\n");

    for ( i = 0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}
