/*Да се
състави програма, която да връща произведението на цифрите на дадено
число. Примерен вход: 417 => Изход: 28 = 4 * 1 * 7;*/

#include <stdio.h>

int main(){
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    if(n==0){
        printf("The product of the numbers of n is 0.");
        return 0;
    }

    int proizvedenie=1;

    while(n>0){
        int lastN = n%10;
        proizvedenie*=lastN;
        n/=10;
    }

    printf("The product of the numbers of n is: %d", proizvedenie);
    return 0;
}