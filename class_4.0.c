#include <stdio.h>

int main(void){
// multiline comments
/*
This function displays the 
name of the university
*/
/*
    printf("SBAT UNIVERSITY");
    // this next one prints a greeting on the screen
    printf("HEllo");

*/

    int x,y; 
    x = 10;
    y = 90;

    int v = x-y;
    int r = x*y;

    printf("The sum of x and y is %d" ,x+y);
    printf("\n %d is the sum of x and y", x+y);
    printf("\n The sum of %d and %d is %d\n", x,y,x+y);
    printf("\nThe the difference of x and y is %d" , v);
    printf("\nThe product of x and y is %d\n" ,r);
return 0;

}