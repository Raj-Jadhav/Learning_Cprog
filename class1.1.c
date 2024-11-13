#include <stdio.h>

int main(){
    //Declaring variable x ,y and w
    int x = 24;
    int y = 5;
    int w = x+y;
   // float z = x/y;
    int g = x%y;


    printf("the sum of x and y is %d\n",w);
    printf("the sum of %d and %d is %d\n",x,y,w);

   // printf("the division of  and y is %f\n",z);
    printf("the modulo of x and y is %d",g);
    return 0;
}
