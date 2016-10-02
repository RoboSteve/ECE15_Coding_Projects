//Steven Cotton A12565940
#include <stdio.h>
int main(){
    int input[10]; //0-9
    int difference, diff_lowest=100000,final1,final2,finali,finalj;
    int i,j;
    printf("Array of 10 integers: ");
    for (i=0;i<10;i++){
        scanf("%d",&input[i]); 
    }
    for (i=0;i<10;i++){
        for (j=i+1;j<10;j++){
            if (input[i]>input[j])
                difference=input[i]-input[j];
            else
                difference=input[j]-input[i];
            if (diff_lowest>difference){
                final1=input[i];
                final2=input[j];
                finali=i;
                finalj=j;
                diff_lowest=difference;
            }
        }
    }
    
    printf("%d at position %d and %d at position %d", final1,finali,final2,finalj);
    return 0;
}
