/*Създайте рекурсивна функция power(base, exp), 
която повдига число на цяла неотрицателна степен. 
Примерен вход: power(3, 4) => Изход: 81.*/

#include <stdio.h>

long power(int base, int exp){
    if(exp==0){
        return 1;
    }
    return base*power(base, exp-1);

}

int main(){
    printf("Input number: ");
    int base;
    scanf("%d", &base);
    
    int exp=-1;
    while(exp<0){
        printf("Input exponential: ");
        scanf("%d", &exp);
    }

    long result = power(base, exp);
    printf("Result: %ld", result);
    return 0;
}