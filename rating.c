#include <stdio.h>
int main(){
    int age;
    char rating;
    
    printf("Enter the movie rating (G, P, or R): ");
    scanf("%c", &rating);
    printf("How old are you? ");
    scanf("%d", &age);
    
    if (rating == 'G')
        printf("Suitable movie. Enjoy!\n");

    else if(rating == 'P'){
        if (age>=13)
            printf("Suitable movie. Enjoy!\n");
        else
            printf("Unsuitable movie. Enjoy the review!\n");
    }
    else if(rating == 'R'){
        if (age>=17)
            printf("Suitable movie. Enjoy!\n");
        else
            printf("Unsuitable movie. Enjoy the review!\n");
    }

    else
        printf("Impossible\n");
 
    return 0;
}


