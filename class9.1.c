#include <stdio.h>

int main(){
    int age;

    printf("Please Enter Your Age below!!!\n");
    scanf("%d" ,&age);

    if(age>60){
        printf("You are an old person");

    }
    else if(age>=18 && age<=60){

            //nesting if and else statements
            //Display if you are between 18 & 35years
            if(age>=18 && age <=35){
                printf("You are a youth");

            }
            else{
                printf("You are an adult");
            }

    }
    else{
        printf("You are a child");
    }
    return 0;
}
