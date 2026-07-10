#include<stdio.h>
#include<conio.h>

int minutes[7] = {0};

void logMinutes()
{
    FILE *fp;
    int i;

    fp = fopen("music_log.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter music listening minutes for 7 days:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);

        fprintf(fp, "%d\n", minutes[i]);
    }

    fclose(fp);

    printf("\nData saved successfully!\n");
}

// Function to display weekly summary
void viewSummary()
{
    int i, total = 0, highest = 0;
    float average;

    printf("\nWeekly Summary\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d : %d minutes\n", i + 1, minutes[i]);

        total += minutes[i];

        if(minutes[i] > highest)
            highest = minutes[i];
    }

    average = total / 7.0;

    printf("\nTotal Minutes  : %d", total);
    printf("\nAverage Minutes: %.2f", average);
    printf("\nHighest Minutes: %d\n", highest);
}


void weeklyReport()
{
    FILE *fp;
    int value;
    int total = 0, highest = 0, count = 0;
    float average;

    fp = fopen("music_log.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo saved data found!\n");
        return;
    }

    while(fscanf(fp, "%d", &value) != EOF)
    {
        total += value;

        if(value > highest)
            highest = value;

        count++;
    }

    fclose(fp);

    if(count > 0)
        average = (float)total / count;
    else
        average = 0;

    printf("\nWeekly Report");
    printf("\nTotal Minutes  : %d", total);
    printf("\nAverage Minutes: %.2f", average);
    printf("\nHighest Minutes: %d\n", highest);
}


void resetData()
{
    FILE *fp;
    char choice;
    int i;

    printf("\nAre you sure you want to reset? (Y/N): ");
    scanf(" %c", &choice);

    if(choice == 'Y' || choice == 'y')
    {
        for(i = 0; i < 7; i++)
            minutes[i] = 0;

        fp = fopen("music_log.txt", "w");

        if(fp != NULL)
            fclose(fp);

        printf("Weekly data has been reset.\n");
    }
    else
    {
        printf("Reset cancelled.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Read Weekly Report\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                logMinutes();
                break;

            case 2:
                viewSummary();
                break;

            case 3:
                weeklyReport();
                break;

            case 4:
                resetData();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
