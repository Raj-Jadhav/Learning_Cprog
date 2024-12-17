#include <stdio.h>
int amount();
double buying(double rate, int amount);
int selling();

int main(){
    double rate_USD = 3502.0;//buying rate
    double rate_UGX = 3,647.0//selling rate
    int amount;
    printf("Welcome to J forex Bureau.\nPlease Insert the amount you want to exchange to USD\n\n");
    printf("EXCHANGE RATE is \nBUYING\n1USD = UGX%d\nSELLING\n",rate);
    scanf("%d",&amount);

return 0;
}
int amount(){
    printf("Welcome to J forex Bureau.\nPlease Insert the amount you want to exchange to USD\n\n");
    printf("Be Advised that our EXCHANGE RATE is 1USD = UGX%d\n\n",rate);
    scanf("%d",&amount);
}
double buying(double rate_USD, int amount){
    rate_USD=3502;
    double exchanged_amount = amount / rate;
    printf("\nThe exchanged amount is %.2lf\n",exchanged_amount);
}
int selling(double rate_UGX, int amount){
    rate_UGX = 3,647.0;
    int sold;
    sold = amount*200;
    printf("Dear Customer, The have received %d UGX",amount);
}

