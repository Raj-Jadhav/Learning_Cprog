#include <stdio.h>

int main(){

    int day = 3;
    switch(day){
        case 1:
            printf("Today is a Monday");
            break;
        case 2:
            printf("Today is Tuesday");
            break;
        case 3:
            printf("Today is Wednesday");
            break;
        default :
            printf("No such day in a week");
            break;
    }
}
