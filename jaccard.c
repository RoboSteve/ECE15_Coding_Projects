//Steven Cotton A12565940
#include <stdio.h>
int main(){
    int length, intersection=0, i, j;
    double Jaccard, uni;
    printf("Array length: ");
    scanf("%d", &length);
    int array1[length], array2[length];
    printf("Array 1: ");
    for(i=0;i<length;i++)
        scanf("%d",&array1[i]);
    printf("Array 2: ");
    for(i=0;i<length;i++)
        scanf("%d",&array2[i]);
    for (i=0;i<length;i++){
        for (j=0;j<length;j++){
            if (array1[i]==array2[j])
                intersection++;
        }
    }
    uni = (2*length)-intersection;
    Jaccard = (intersection*1.0)/uni;
    printf("Jaccard index is: %.2lf\n",Jaccard);
    return 0;
}
