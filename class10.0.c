#include <stdio.h>

int main(){
    char name[50];
    int age;

    printf("Please Insert your name!\n");
    scanf("%s" ,name);

    printf("Please Insert your age below\n");
    scanf("%d" ,&age);

    if(age >= 18){
        printf("%s is %d and is Eligible to Vote\n" ,name,age);
    }
    else{
        printf("%s is %d and is Not Eligible to vote\n" ,name,age);
    }
return 0;
}
