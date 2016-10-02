#include <stdio.h>
int main(){
    double charge1, charge2, distance, Force;
    printf("Two charges and their distance: ");
    scanf("%lf mC, %lf mC, %lf cm",&charge1, &charge2, &distance);
    Force= (89.8755)*((charge1*charge2)/(distance*distance));
    printf("The electric force is %.4lf N\n", Force);
    return 0;
}
