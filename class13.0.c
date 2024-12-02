#include <stdio.h>

int main(){
    int multiple = 1;
    int prod;

    do{
        prod = 3 * multiple;
        printf("The multiple of 3 and %d is %d\n",multiple,prod);
        multiple++;
        //x+=3;
    }
    while(prod<=15);

return 0;
}
