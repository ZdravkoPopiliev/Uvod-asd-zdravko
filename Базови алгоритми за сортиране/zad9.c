/*Проверете
дали всички елементи на сортиран масив A са уникални и изтрийте
дубликатите на място (като запазите по един екземпляр от всяка стойност).
Примерен вход: {1, 1, 2, 3, 3, 3, 5} => Изход: не са уникални; след
изтриването {1, 2, 3, 5,
_, _, _}. (Празните стойности след края могат да са произволни числа, но на
екрана трябва да се принтират само уникалните стойности).*/

#include <stdio.h>

int main(){
    printf("Input number of numbers: ");
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &A[i]);
    }

    int numbersLeft=n;
    int uniqe=1;
    int lastUniqe=0;
    for(int i=1; i<n; i++){
        if(A[lastUniqe]==A[i]){
            uniqe=0;
            numbersLeft--;
        }
        else{
            lastUniqe++;
            A[lastUniqe]=A[i];
        }
    }

    if(uniqe){
        printf("All numbers are uniqe.");
    }
    else{
        for(int j=0; j<numbersLeft; j++){
            printf("%d ", A[j]);
        }
    }
}