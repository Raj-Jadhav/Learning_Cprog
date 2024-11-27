#include <stdio.h>

int main(){
    int i = 10;

    int x,a,b,sum;
    do{
        printf("Please enter the first number\n");
        scanf("%d" ,&a);
        printf("Please enter a second number\n");
        scanf("%d",&b);
        sum=a+b;
        printf("The sum of %d and %d is %d\n",a,b,sum);
        printf("Would you like to continue??\n press 1 to continue or 2 exit\n");
        scanf("%d",&x);
    }
    while(x==1);

return 0;
}
