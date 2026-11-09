/*За
сортиран статичен масив A намерете минималния и максималния елемент, както
и k-тия най-малък и k-тия най-голям елемент, без да обхождате целия масив.
Примерен вход: A = {3, 7, 9, 15, 21, 30}, k = 2 => Изход: минимум 3,
максимум 30, 2-ри най-малък 7, 2-ри най-голям 21.*/

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

    printf("input k: ");
    int k;
    scanf("%d", &k);

    printf("Smalest value: %d\nHighest value:%d\n%d smalest value:%d\n%d highest value %d\n", A[0], A[n-1], k, A[k-1], k, A[n-k]);
}