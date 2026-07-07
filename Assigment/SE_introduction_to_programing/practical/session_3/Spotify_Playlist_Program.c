#include<stdio.h>
#include<conio.h>
void main()
{
    char playlistname[50] = " arijit singh";
    int totalsongs = 75;
    float averageduration = 4.5;

    printf("My favorite Spotify playlist is %s.\nIt contains %d.\nsongs with an average duration of %.1f minutes.\n",
           playlistname, totalsongs, averageduration);

    getch();
}
