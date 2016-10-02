#include <stdio.h>
int main(){
    int a,b,c,d,e,f,div3=0,div7=0,divboth=0;
    printf("Six integers: ");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    if (a%3==0)
        div3++;
    if (a%7==0)
        div7++;
    if (a%3==0 && a%7==0)
        divboth++;
    if (b%3==0)
        div3++;
    if (b%7==0)
        div7++;
    if (b%3==0 && b%7==0)
        divboth++;
    if (c%3==0)
        div3++;
    if (c%7==0)
        div7++;
    if (c%3==0 && c%7==0)
        divboth++;
    if (d%3==0)
        div3++;
    if (d%7==0)
        div7++;
    if (d%3==0 && d%7==0)
        divboth++;
    if (e%3==0)
        div3++;
    if (e%7==0)
        div7++;
    if (e%3==0 && e%7==0)
        divboth++;
    if (f%3==0)
        div3++;
    if (f%7==0)
        div7++;
    if (f%3==0 && f%7==0)
        divboth++;
    printf("%d divisible by 3,\n", div3);
    printf("%d divisible by 7,\n", div7);
    printf("%d divisible by both.\n", divboth);
    return 0;
}
