#include <stdio.h>
/*double refers to that data type in the C language that helps in storing high-precision sorts of floating-point numbers
or data in the computer memory.*/
void get_name();
double addSum();
int main(){
    get_name();
    addSum(25.2,50.2);
    printf("\nThe sum of is %lf",addSum()/*addSum(25.2,50.2)*/);
return 0;
}
void get_name(){
    printf("Your name is TIMO DONELY");

}
double addSum(double a, double b){
    double sum = a + b;
return sum;
}
