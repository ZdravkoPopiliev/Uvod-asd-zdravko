/*Да се
състави програма, която да сортира даден масив възходящо и да намира
сумата на елементите на масива, умножени по съответния индекс от
сортирания масив. Примерен вход: {1, 7, 3, 4, 9, 2} => След сортирането
= {1, 2, 3, 4, 7, 9} => Изход: 93 = 1 * 0 + 2 * 1 + 3 * 2 + 4 * 3 + 7 *
4 + 9 * 5*/

#include <stdio.h>

int main(){
    int n=0;
    printf("Input number of numbers: ");
    scanf("%d", &n);
    
    int a[n];
    for(int i=0; i<n; i++){
        printf("Input number %d: ", i+1);
        scanf("%d", & a[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i]*i;
    }
    printf("The sum is: %d", sum);
    return 0;
}