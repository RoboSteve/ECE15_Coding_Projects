//Steven Cotton A12565940
#include <stdio.h>
int main (){
    int length,c=0,obracket=0,cbracket=0,oparentheses=0,cparentheses=0,i;
    char array[80];
    printf("String: ");
    scanf("%s", array);
    while (array[c]!='\0'){ //length
        c++;
        length++;
    }
    if (length%2!=0){       //uneven
        printf("Unbalanced\n");
        return 0;
    }
    for (i=0;i<length;i++){
        if (array[i]=='{' && array[i+1]==')'){
            printf("Unbalanced\n");
            return 0;
        }
        if (array[i]=='{')
            obracket++;
        if (array[i]=='(')
            oparentheses++;
        if (array[i]=='}')
            cbracket++;
        if (array[i]==')')
            cparentheses++;
        
        if (obracket<cbracket || oparentheses<cparentheses){
            printf("Unbalanced\n");
            return 0;
        }
    }
    if (obracket!=cbracket || oparentheses!=cparentheses){
        printf("Unbalanced\n");
        return 0;
        }
    printf("Balanced\n");
    return 0;
}
