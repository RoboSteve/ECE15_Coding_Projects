//Steven Cotton A12565940 Oct 21, 2015
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL)); 
    //int target = rand() % 20 + 1;
    int target=14;
    int myguess, i=1;
    //printf("%d\n", target); Prints target
    printf("Guess my number: ");
    scanf("%d", &myguess);
    while (myguess != target){
        if (abs(target-myguess)<5) {
            if (myguess<target) {
                printf("Your guess is low, guess again: ");
            }
            else {
                printf("Your guess is high, guess again: ");
            }
        }
        else { // (abs((myguess-target)>=5))
            if (myguess<target) {
                printf("Your guess is too low, guess again: ");
            }
            else {
                printf("Your guess is too high, guess again: ");
            }
        }

        i++;
        scanf("%d",&myguess);
    }

    printf("You guessed correctly in %d tries, congratulations!\n",i);
    return 0;
}

