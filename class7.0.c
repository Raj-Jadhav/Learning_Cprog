#include <stdio.h>

int main(){

    /*
    char text[]="My name is Ivan\n My country is Uganda\n Country code is";
    int x = 256;
    float a = 100.24;
    float b = 200.89;

    printf("%s %d. \nThe sum of %.2f and %.2f is %.1f", text ,x , a , b , a+b);
    */

    char name[] = "Ivan" ;
    char country[]= "Uganda";
    int country_code = 256;
    float a, b , sum;
    a = 100.24, b = 200.89, sum = a+b;

    printf("My name is %s \nMy country is %s \nMy country code is %d \n The sum of %.2f and %.2f is %.1f", name, country ,country_code , a, b , sum);


return 0;
}
