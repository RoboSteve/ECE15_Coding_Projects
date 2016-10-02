//Steven Cotton A12565940 Oct 21, 2015 HW4P1
#include <stdio.h>
int main(){
    double side1, side2, side3;
    int tri=0;
    printf("Three lengths: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    if (side1+ side2>side3)
        tri++;
    if (side2+side3>side1)
        tri++;
    if (side1+side3>side2)
        tri++;
    if (tri==3)
        printf("Triangle is possible!\n");
    else
        printf("Triangle is impossible!\n");
    return 0;
}

