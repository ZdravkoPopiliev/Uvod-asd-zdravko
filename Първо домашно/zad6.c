/*Да се
направи рекурсивна функцията, която преобразува дадено десетично число в
двоично и го връща като целочислено число. Примерен вход: 10 => Изход
1010. Хубаво е функцията да връща тип “long”, защото двоичните числа могат
да имат много цифри.*/

#include <stdio.h>

long binary(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%2)+10*binary(n/2);
    }
}

int main(){
    int n;
    printf("Input n: ");
    scanf("%d", &n);

    long r = binary(n);

    printf("n in binary is: %ld", r);
    return 0;
}