#include <stdio.h>

int main(){
    int score = 52;

    if(score > 80){
        printf("\nHigh Distinction\n");
    }
    else if(score >= 70){
        printf("\nDistinction\n");
    }
    else if(score >= 60){
        printf("\nCredit\n");
    }
    else if(score >= 50){
        printf("\nPass\n");
    }
    else{
        printf("\nFail\n");
    }
return 0;
}
