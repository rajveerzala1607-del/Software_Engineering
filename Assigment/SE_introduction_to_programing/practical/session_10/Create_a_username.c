#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char fullName[100];
    char username[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);


    fullName[strcspn(fullName, "\n")] = '\0';

    if (strlen(fullName) < 100)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(username, fullName, 100);
        username[100] = '\0';
    }

    printf("Generated Username: %s\n", username);

    return 0;
}
