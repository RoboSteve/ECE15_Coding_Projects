#include <stdio.h>
int main(){
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);
    char a[100],b[100];
    int i=1,j=0,alen=0,blen=0;
    while(str[i]!=')'){
        a[j]=str[i];
        alen++;
        i++; 
        j++;
    }
    i+=2;
    j=0;
    while(str[i]!=')'){
        b[j]=str[i];
        blen++;
        i++; 
        j++;
    }
    for(i=0;i<alen;i++){
        for(j=0;j<blen;j++)
            printf("%c%c\n",a[i],b[j]);
    }
    return 0;
}
