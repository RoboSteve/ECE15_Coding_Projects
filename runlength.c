//Steven Cotton A12565940
#include <stdio.h>
int array[100];
int lenOfRun(int a[],int n){
    int i,j=0;
    int counter=1;
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            counter++;
        }
        else{
            array[j]=counter;
            counter=1;
            j++;
        }
    }
    for(i=j+1;i<n;i++){
        array[i]='\0';
    }
    if(j>1)
        return j;
    else
        return 1;
}
int main(){
    printf("Array of integers: ");
    int l,n,i=1,length=0;
    l=scanf("%d",&array[0]);
    while (l==1){
        l=scanf("%d", &array[i]);
        i++;
    }
    length=i-1;
   // for(i=0;i<length;i++){
   //     printf("%d ",array[i]);
   // }
   // printf("\n");
    while(n>1 || array[0]!=1){
        n=lenOfRun(array,length);
        length=n;
        printf("Next: ");
        for (i=0;i<n;i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
    return 0;
}
