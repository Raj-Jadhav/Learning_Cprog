#include <stdio.h>

int main(){
    int age;

    printf("Please Enter Your Age below!!!\n");
    scanf("%d" ,&age);

    if(age>60){
        printf("You are an old person\n" ,age);

    }
    else if(age>=18&&age<=60){
        printf("You are a youth\n");

    }
    else{
        printf("You are a child\n");
    }
    return 0;
}

