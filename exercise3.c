#include <stdio.h>
int Add_numbers(int a, int b);
int main(){
//Task 1
int a,b,sum;

    printf("Please enter two numbers\nNumber 1: ");
    scanf("%d",&a);
    printf("\nNumber 2: ");
    scanf("%d",&b);

    sum = Add_numbers(a , b);

 // Task 2
    int i = 1, j = 1;
        printf("\nThe multiplication table\n");
    if (sum >= 1) {
        for(i = 1; i <= sum; i++) {
            for (j = 1; j <= sum; j++) {
                printf("%d\t", i * j);
            }
            printf("\n");
        }
    } else {
        printf("The sum is not greater than 1, so the input is invalid!\n");
    }

    return 0;
}

int Add_numbers(int a, int b){
    int sum = a+b;
    printf("\nThe sum of %d and %d is %d\n",a,b,sum);
return sum;
}

