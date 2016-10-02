#include <stdio.h>
double main(){
    double number;
    printf("Enter a real number between 0 and 10:  ");
    scanf("%lf", &number);
    //printf("%lf",number);
    
    printf("+--------+------+\n"
           "|multiple|number|\n"
           "+--------+------+\n"
           "|    1   |%6.4f|\n"
           "|    2   |%6.3f|\n"
           "|    3   |%6.2f|\n"
           "|    4   |%6.1f|\n"
           "+--------+------+\n"
            ,number, number*2, number*3, number*4); 
    return 0;
}
