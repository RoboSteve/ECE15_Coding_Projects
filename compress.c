//Steven Cotton A12565940 Oct 18, 2015 HW4P2
#include <stdio.h>
int main (){
    char c;
    printf("String: ");
    while(c!='\n'){
        c=getchar();
        if (c != ' ' && c!='a'&& c!='e'&& c!='i' && c!='o' && c!='u')
            putchar(c);
        }
    return 0;
}
