#include <stdio.h>

int main(){
    int x,y,sum;
    x=0, y=1;
        do{
            sum = x + y;
            printf("The sum of %d + %d is %d\n ", x,y,sum);
            x++;

        }
        while(sum<10);

return 0;
}
