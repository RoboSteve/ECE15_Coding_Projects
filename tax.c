#include <stdio.h>
int main(){
    double income,totaltrumptax=0, trumptax1=0, trumptax2=0, trumptax3=0;
    printf("Salary in dollars: ");
    scanf("%lf", &income);
    if (income<=25000)
        trumptax1= 0.0;
    
    else if(income<=50000){
        trumptax1= (income-25000)*.10;
    }
    else if(income<=150000){
        trumptax1= 25000*.10;
        trumptax2= (income-50000)*.20;
    }
    else if(income>150000){
        trumptax1= 25000*.10;
        trumptax2= (150000-50000)*.20;
        trumptax3= (income-150000)*.25;
    };
    totaltrumptax=trumptax1+trumptax2+trumptax3;
    
    double totaljebtax, jebtax1=0, jebtax2=0, jebtax3=0;
    if (income<=43750)
        jebtax1=(income*.10);
    else if(income<=97750){
        jebtax1=(43750*.10);
        jebtax2=(income-43750)*.25;
    }
    else {//more than 97750
        jebtax1=(43750*.10);
        jebtax2=(97750-43750)*.25;
        jebtax3=(income-97750)*.28;
    }
    totaljebtax=jebtax1+jebtax2+jebtax3;

    printf("Make America great again! Tax amount: $%.2f\n",totaltrumptax);
    printf("Jeb 2016! Tax amount: $%.2f\n",totaljebtax);

    return 0;
}
