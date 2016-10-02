//Steven Cotton A12565940
#include <stdio.h>
int main(){
    int arraysize,shift,i,counter=0,j;
    printf("Size of arrays (1-10): ");
    scanf("%d", &arraysize);
    int array1[arraysize],array2[arraysize],array11[arraysize];
    printf("First array: ");
    for (i=0;i<arraysize;i++)//scanning first array
        scanf("%d", &array1[i]);
    printf("Second array: ");
    for (i=0;i<arraysize;i++)//scanning second array
        scanf("%d", &array2[i]);
    for (i=0;i<arraysize*2;i++)
        array11[i]=array1[i%arraysize];
    /*
    for (i=0;i<arraysize*2;i++)//prints out duplicate array
        printf("%d ",array11[i]);
    printf("\n");
    */
    j=0;
    shift=0;
    for(i=0;i<2*arraysize-1;i++){//checks if shifted
        while (array11[j]!=array2[i]){
            //printf("%d vs %d \n",array11[j],array2[i]);//tells what is being compared    
            shift++;
            j++;
            //printf("jfalse=%d \n",j);//remove
            counter=0;
        }
        while(array11[j]==array2[i]){
            //printf("%d vs %d \n",array11[j],array2[i]);//tells what is being compared  
            counter++;
            j++;
            //printf("jtrue=%d \n",j);//remove
            //printf("counter=%d\n",counter);//remove
        }
        if (counter==arraysize && shift!=0 && shift<=arraysize){
            printf("Shift by %d\n",arraysize-shift);
            return 0;
        }
    }
    printf("Not a shift!\n");
    return 0;
}
