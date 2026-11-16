/*Създайте рекурсивна функция, която връща сумата от цифрите на число. 
Примерен вход: 9875 => Изход: 29.*/

#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}

int main(){
    printf("Input number: ");
    int n;
    scanf("%d", &n);
    int result = sum(n);
    printf("Sum of n's numbers is: %d", result);

    return 0;
}