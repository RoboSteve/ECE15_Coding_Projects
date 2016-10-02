//Steven Cotton A12565940
#include <stdio.h>
int main(){
    char array[100],pattern[5];
    int i,j,counter=0,matches=0,alength=0,plength=0;
    printf("String: ");  
    scanf("%s", array);
    printf("Pattern: ");
    scanf("%s", pattern);
    while (array[alength]!='\0')
        alength++;
    //printf("alength=%d\n",alength);
    while (pattern[plength]!='\0')
        plength++;
    //printf("plength=%d\n",plength);
    for(i=0;i<alength;i++){
        for (j=counter;j<plength;j++){
            //printf("(%d=%c,%d=%c) counter=%d\n",i,array[i],j,pattern[j],counter);
            if(array[i]!=pattern[j]){
                counter=0;
                //printf("breaking\n");
                break;
            }
            else{// (array[i]==pattern[j])
                counter++;
                if (counter==plength){
                    matches++;
                    i=(i-counter)+1;
                    counter=0;
                }
                break;
            }
            //printf("(%d,%d) counter=%d\n",i,j,counter);
        }
    }
    printf("%d matches\n", matches);
    return 0;
}
    
