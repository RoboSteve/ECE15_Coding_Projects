#include <stdio.h>
int main(){
    int input1,sum=0, d, input, output, base1, base2,base_power=1;
    printf("Value and two bases: ");
    scanf("%d %d %d", &input, &base1, &base2);
    input1=input;
    while(input>0){
        d=(input%10);
        input/=10;
        if (d>=base1){
            printf("%d is not a valid number in base %d\n", input, base1);
            return 0;
        }
        sum+=d*base_power;
        base_power*=base1;
    }

    base_power=1;
    output=0;
    while(sum>0){
        d=sum%base2;
        output+=base_power*d;
        sum/=base2;
        base_power*=10;
    }
    printf("%d_%d = %d_%d\n",input1,base1,output,base2);
    return 0;
}
