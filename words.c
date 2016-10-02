#include <stdio.h>
int main(){
    int words=0;
    char input, previous=' ';
    printf("String: ");
    while (input!='\n'){
        input=getchar();
        if (input!=' ' || previous!=' ')
            putchar(input);
        if (previous==' ' && input!=' ')
            words++;
        previous=input;
    }
    printf("%d carefully chosen words!\n",words);
    return 0;
}

