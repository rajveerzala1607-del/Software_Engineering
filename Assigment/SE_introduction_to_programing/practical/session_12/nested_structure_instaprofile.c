#include <stdio.h>
#include <conio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile profile = {
        "rajveer_zala",
        2000,
        {"Software Engineering Student", 21}
    };

    printf("Instagram Profile\n");
    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Bio         : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);

    return 0;
}
