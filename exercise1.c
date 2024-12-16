#include <stdio.h>

void get_details(char name[], char location[]);

int main() {
    char name[50], location[50];
    get_details(name, location);

    int i;
    int n, sum = 0;

    printf("Please enter a number (<= 20):\n");
    scanf("%d", &n);

    while (n > 20) {
        printf("Invalid Input. Please enter a value <= 20:\n");
        scanf("%d", &n);
    }

    // Loop to calculate sum of numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum += i;  // Add i to sum
        printf("The sum of numbers from 1 up to %d is: %d\n", i, sum);
    }
    printf("The sum of numbers from 1 upto %d is [%d]",n,sum);
    return 0;
}

// Function to get user details
void get_details(char name[], char location[]) {
    printf("Please Enter your name below:\n ");
    scanf("%s", name);
    printf("Please Enter your location below:\n ");
    scanf("%s", location);
    printf("Your name is %s and your location is %s\n", name, location);
}
