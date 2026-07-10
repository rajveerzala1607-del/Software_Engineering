#include<stdio.h>
#include<conio.h>

void main()
{
    int cricketScores[4][2] =
    {
        {180, 175},
        {210, 198},
        {165, 172},
        {220, 215}
    };

    int i;

    printf("Highest Score in Each Match:\n");

    for(i = 0; i < 4; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Match %d : %d\n", i + 1, cricketScores[i][0]);
        }
        else
        {
            printf("Match %d : %d\n", i + 1, cricketScores[i][1]);
        }
    }

    getch();
}
