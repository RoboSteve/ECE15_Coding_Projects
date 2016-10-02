//Steven Cotton A12565940
#include <stdio.h>
#include <math.h>
int main(){
    int a,i;
    double x, prev_x,  fx, dfx, term, ex;
    
    printf("a: ");
    scanf("%d",&a);
    //printf("%d" , a);
    double logA = log(a);
    //printf("%lf" , logA);
    printf("initial point: ");
    scanf("%lf",&x);
 
    while (x-prev_x>0.001 || x-prev_x<-0.001){
        term=1;
        ex=1;
        for(i=1;i<20;i++){ //Taylor Series for e^x
            term*=(x/i);
            ex+=term;
        };
        dfx=ex;
        fx=ex-a;
        prev_x=x;
        x=prev_x-(fx/dfx);
    }
    //printf("%lf" , logA);
    //printf("ln(a) = %0.8lf (NR), %0.8lf (math.h)\n", x, logA);
    
    
    printf("ln(a) = %0.8lf (NR), %0.8lf (math.h)\n" ,x, logA);
    return 0;
}
