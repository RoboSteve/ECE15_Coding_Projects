#include <stdio.h>
double main(){
    double BMI, weight, heightfoot, heightinches, height;
    printf("Your weight in pounds: ");
    scanf("%lf", &weight);
    printf("Your height in feet and inches, e.g. 5'10\": ");
    scanf("%lf'%lf\"", &heightfoot, &heightinches);
    height = ((heightfoot*12)+heightinches)*0.0254;
    weight = weight*0.453592;
    BMI = weight/(height*height);
    printf("You are %.2f m tall, weigh %.2f kg, and have BMI %.2f. Perfect!\n",
            height, weight, BMI);
    return 0;
}
