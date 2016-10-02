#include <stdio.h>
int main(){
    int GB; //Variable indicating memory size
    printf("Welcome to Apple.con, home of the amazing 6S. \n");
    printf("How much memory would you like (16, 64, or 128)? ");
    scanf("%d", &GB);
    printf("Your phone costs merely $%d. \n", 649+GB/64*100);
    return 0;
}
