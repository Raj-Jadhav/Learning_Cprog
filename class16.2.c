#include <stdio.h>
int calc();
int main(){

   int a = calc(200,300);
   int b = a + 1000;
   //printf("The sum is %d\n",a);
   printf("The sum is %d\n",b);
return 0;
}
int calc(int x, int y){
    int sum = x + y;
    return sum;
}
