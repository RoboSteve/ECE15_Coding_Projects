//Steven Cotton A12565940 Oct 21, 2015 HW4P4
#include <stdio.h>
int score(int points);


int main(){
    int score1,score2;
    printf("Result: ");
    scanf("%d-%d",&score1,&score2);
    printf("Announcement: "); 
    if (score1 != score2){
        score(score1);
        printf(" ");
        score(score2);
        printf("\n");
    }
    else if (score1==0 && score2==0)
        printf("love all\n");
    else
        printf("deuce\n");
    return 0;
}
//uses score integer to print tennis score
int score(int points){
    switch (points){
        case 0:
            printf("love");
            break;
        case 1:
            printf("fifteen");
            break;
        case 2:
            printf("thirty");
            break;
        case 3:
            printf("forty");
            break;
        default:
            printf("impossible");
            break;
    }
    return 0;
}
    
