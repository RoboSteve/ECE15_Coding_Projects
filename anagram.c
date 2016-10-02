//Steven Cotton A12565940
#include <stdio.h>
int length1,length2;
int isAnagram(char array1[], char array2[]){
    int i,j;
    for (i=0;i<length1;i++){
        for (j=0;j<length2;j++){
            if (array1[i]==array2[j] && array1[i]!=' ' && array2[j]!=' '){
                //printf("%c,%c",array1[i],array2[j]);
                array1[i]=' ';
                array2[j]=' ';
                break;
            }
           // if (i==j)
           //     return 0;
        }
    }
    i=0;
    while(array1[i]!='\0'){
        if (array1[i]!=' ')
            return 0;
        i++;
    }
    i=0;
    while(array2[i]!='\0'){
        if (array2[i]!=' ')
            return 0;
        i++;
    }
    return 1;
}
int main(){
    length1=0;
    length2=0;
    char c,array1[20]={},array2[20]={};
    printf("First string: ");
    c=getchar();
    while (c!='\0' && length1<20 && c!='\n'){
        array1[length1]=c;
        length1++;
        c=getchar();
    }
    printf("Second string: ");
    c=getchar();
    while (c!='\0' && length2<20 && c!='\n'){
        array2[length2]=c;
        length2++;
        c=getchar();
    }
    isAnagram(array1,array2)? printf("Anagrams!\n"):printf("Not Anagrams!\n");
    return 0;
}
