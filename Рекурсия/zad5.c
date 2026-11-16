/*Създайте рекурсивна функция gcd(a, b), 
която намира най-големия общ делител по алгоритъма на Евклид. 
Примерен вход: gcd(48, 18) => Изход: 6.*/

#include <stdio.h>

int gcd(int a, int b){
    if(b==0){
        return a;
    }

    return gcd(b, a%b);
}

int main(){
    printf("Input a and b: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int result = gcd(a,b);
    printf("Nai golqm obsht delitel: %d", result);
    return 0;
}