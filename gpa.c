#include <stdio.h>
int main(){
    double w1=0, w2=0, w3=0, w4=0, w5=0, GPA; //w=weight number
    int courses; //number of courses
    char g1, g2, g3, g4, g5; //g=grade letter
    printf("Enter up to five course credits and grades (3A,4B,..): ");
    courses = scanf("%lf%c,%lf%c,%lf%c,%lf%c,%lf%c", &w1,&g1, &w2,&g2, &w3,&g3, &w4,&g4, &w5,&g5);
    g1= 'E'-g1;
    g2= 'E'-g2;
    g3= 'E'-g3;
    g4= 'E'-g4;
    g5= 'E'-g5;
    GPA = ((w1*g1)+(w2*g2)+(w3*g3)+(w4*g4)+(w5*g5))/(w1+w2+w3+w4+w5);
    printf("Your %d-course GPA is %.1f. Congratulations!\n",courses/2,GPA);
    return 0;
}
