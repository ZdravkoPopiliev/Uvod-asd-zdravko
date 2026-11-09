/*Пребройте
колко стойности от сортиран масив A попадат в интервала [lo..hi]. Примерен
вход: A = {1, 3, 5, 7, 9, 11}, lo = 4, hi = 9 => Изход: 3 (стойностите
5, 7 и 9).*/

#include <stdio.h>

int main(){
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &A[i]);
    }

    printf("Input lo: ");
    int lo;
    scanf("%d", &lo);

    printf("Input hi: ");
    int hi;
    scanf("%d", &hi);

    int nums[n];
    int num_count=0;

    for(int i=0; i<n; i++){
        if(A[i]>=lo && A[i]<=hi){
            nums[num_count++] = A[i];
        }
    }

    printf("%d (stoinostite ", num_count);
    for(int i=0; i<num_count; i++){
        printf("%d, ", nums[i]);
    }
    printf(").");

    return 0;
}