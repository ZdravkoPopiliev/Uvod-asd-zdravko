/*Да се
състави програма, която да намира сумата на простите числа в даден масив
(1 не се смята за просто число). Примерен вход: {1, 7, 10, 15, 16, 13, 23,
30} => Изход: 43 = 7 + 13 + 23*/

#include <stdio.h>

int main(){
    int n;
    printf("input number of numbers: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("input number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    int sum=0;

    for(int i=0; i<n; i++){
        if(a[i]<=1){
            continue;
        }
        int delitel = a[i]/2;
        int isPrime = 1;
        while(delitel>1){
            if(a[i]%delitel==0){
                isPrime=0;
                break;
            }
            else{
                delitel--;
            }
        }
        if(isPrime){
            sum+=a[i];
        }
    }
    printf("The sum of all the prime numbers of the array is %d", sum);
    return 0;
}