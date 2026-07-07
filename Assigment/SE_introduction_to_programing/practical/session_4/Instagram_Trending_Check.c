#include <stdio.h>
#include <conio.h>

int main() {
    int likes, comments, shares;

    printf("Enter Likes: ");
    scanf("%d", &likes);

    printf("Enter Comments: ");
    scanf("%d", &comments);

    printf("Enter Shares: ");
    scanf("%d", &shares);

    if (likes >= 1000 || (comments > 200 && shares >= 50))
        printf("Post is Trending\n");
    else
        printf("Post is Not Trending\n");

    return 0;
}
