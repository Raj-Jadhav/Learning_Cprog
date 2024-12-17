#include <stdio.h>


int main(){
    double rate = 300;
    int amount;
    printf("Welcome to J forex Bureau.\nPlease Insert the amount you want to exchange to USD\n\n");
    printf("Be Advised that our EXCHANGE RATE is 1USD = UGX%d\n\n",rate);
    scanf("%d",&amount);

    double exchanged_amount = amount / rate;
    printf("\nYour exchanged amount is USD %.2lf\n",exchanged_amount);


return 0;
}


