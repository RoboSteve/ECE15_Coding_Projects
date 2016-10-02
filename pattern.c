//Steven Cotton A12565940
#include <stdio.h>
int main(){
    int rows, spaces,i,printedrows=0,digit=1;
    printf("Number of rows: ");
    scanf("%d",&rows);
    spaces=rows-1;
    int nums;
    for (i=0;i<rows;i++){
        nums = i * 2 + 1;
        digit = i + 1;
        while (spaces>0){
            printf(" ");
            spaces--;
        }
        spaces=(rows-2)-i;
    for (printedrows=0;printedrows<nums;printedrows++){
        printf("%d", digit);
        if (printedrows<i){
            digit++;
        }
        else {
            digit--;
        }
    }
        printf("\n");
        
    }
    return 0;
}

