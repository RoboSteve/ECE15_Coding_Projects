#include <stdio.h>
int main(){
    int input;
    printf("Integer(>=2): ");
    scanf("%d",&input);
    if (input<2){
        printf("no\n");
        return 0;
    }
    while (input>0 && input%2==0){
        input/=2;
    }
    while (input>0 && input%3==0){
        input/=3;
    }
    if (input==1)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
