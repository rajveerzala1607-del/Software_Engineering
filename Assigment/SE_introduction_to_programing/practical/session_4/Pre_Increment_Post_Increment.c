#include <stdio.h>
#include <conio.h>

int main() {
    int followerCount = 100;

    printf("Initial Value: %d\n", followerCount);

    // Post-increment
    printf("Post-increment: %d\n", followerCount++);
    printf("After Post-increment: %d\n", followerCount);

    // Reset value
    followerCount = 100;

    // Pre-increment
    printf("Pre-increment: %d\n", ++followerCount);
    printf("After Pre-increment: %d\n", followerCount);

    return 0;
}
