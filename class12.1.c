#include <stdio.h>

int main(){
    int x,i,y,sum;
    i=1,x=1,y=10;
    do{
        sum=x+y;
        printf("The sum is  %d\n",sum);
        i++;
    }
    while(i<=5);

return 0;
}
