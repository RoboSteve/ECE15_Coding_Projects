#include <stdio.h>
int maxzero(int a[],int N);
int main(){
    int a[100],n,i;
    printf("Length: ");
    scanf("%d",&n);
    printf("%d positive integers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Sorted: ");
    for(i=0;i<n;i++){
        printf("%d ",maxzero(a,n));
        a[n-i+1]=0;
    }
    return 0;
}
int maxzero(int a[],int N){
    int i,temp;
    for(i=0;i<N;i++){
        printf("(%d) ",a[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){
        if(a[i]==a[i+1])
            continue;
        else if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i=0;
        }
        for(i=0;i<N;i++){
            printf("[%d] ",a[i]);
            }
        printf("\n");
    }
    return a[N-1];
}
