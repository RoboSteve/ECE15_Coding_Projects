//Steven Cotton A12565940
#include <stdio.h>
#define PIN 1010
int main(){
    int pin,menuchoice, balance=1000,input;

enterpin:
    printf("Enter Pin: ");
    scanf("%d",&pin);
    if (pin!=PIN){
        printf("Invalid Pin! ");
        goto enterpin;
    }
    
    printf("***** Welcome to ECE15's ATM *****\n");
    
service_select:
    printf("***** Select Service *****\n"
           "1. Check Balance \n"
           "2. Withdraw Cash \n"
           "3. Deposit Cash \n"
           "4. Quit\n"
           "***** ***** *****\n");
    printf("Your Choice: ");
    scanf("%d",&menuchoice);
    switch (menuchoice){
        case 1: goto CheckBalance;
        case 2: goto Withdraw;
        case 3: goto Deposit;
        case 4: goto Quit;
        default: {printf("Invalid choice!\n");
                     goto service_select;
                 }
    }

CheckBalance:
    printf("Your Balance is: $%d\n", balance);
    goto service_select;

Withdraw:
    printf("Withdrawal Amount in $: ");
    scanf("%d", &input);
    if (input>balance-100){
        printf("Insufficient Balance!\n");
        goto service_select;
    }
    if (input%5!=0){
        printf("Not a multiple of 5!\n");
        goto service_select;
    }
    balance=balance-input;
    printf("Please collect your cash!\n"
           "Your new balance is: $%d\n",balance);
    goto service_select;

Deposit:
    printf("Deposit Amount in $: ");
    scanf("%d",&input);
    balance+=input;
    printf("Your new balance is: $%d\n",balance);
    goto service_select;

Quit:
    printf("Thanks for using the ECE15's ATM!\n");
    return 0;
}
