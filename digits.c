//Steven Cotton A12565940 (This is now my third time, my completed code has been deleted twice)
#include <stdio.h>
#include <stdlib.h>
int main(){
    int integer, int1, sum, number;
    double input;
    printf("Integer: ");
    number=scanf("%lf",&input);
    integer=(int)input;
    int1=integer;
    
    //checks if character beginning, then if negative, then if not integer
    if ((number/input)<0 || abs(input)!=input || integer!=input){
        printf("Invalid number!\n");
        return 0;
    }
    
    //printf("%d,%lf\n",integer,input);

    while (integer>0){
        sum+=integer%10;
        integer=integer/10;
    }
    printf("Digit-sum of %d = %d\n",int1, sum);
    return 0;
}
