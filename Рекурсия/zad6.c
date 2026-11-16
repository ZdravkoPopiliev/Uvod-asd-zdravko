/*Създайте рекурсивна функция, която намира най-големия елемент в масив. 
Примерен вход: {3, 17, 8, 42, 5} => Изход: 42.*/

#include <stdio.h>

int biggest(int arr[], int n, int bIndex, int count){
    if(count==n){
        return arr[bIndex];
    }
    if(arr[count]>arr[bIndex]){
        bIndex=count;
    }

    return biggest(arr, n, bIndex, count+1);
}

int main(){
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("input umber: ");
        scanf("%d", &arr[i]);
    }

    int big = biggest(arr, n, 0, 0);
    printf("Biggest: %d", big);
}