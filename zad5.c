/*Да се
направи функция, която приема произволен символен низ и да връща символът
от него, който има най-голям ASCII код. Примерен вход: “Ivan” => Изход:
‘v’.*/

#include <stdio.h>
#include <string.h>

char biggestASCII(char a[]){
    int n = strlen(a);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                char c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }

    return a[n-1];
}

int main(){
    char a[20];
    printf("Input string: ");
    scanf("%s", a);

    char r = biggestASCII(a);

    printf("The biggest ascii code has: %c", r);
    return 0;
}