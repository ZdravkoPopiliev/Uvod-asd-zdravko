/*Направете
функция, която намира k-тия най-малък елемент, като прави само k прохода
на selection sort. Примерен вход: {7, 10, 4, 3, 20, 15}, k = 3 =>
Изход: 7.*/

#include <stdio.h>

void selection_sort(int k, int arr[], int n){
    for(int i=0; i<k; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int j=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=j;
        }
    }
}

int main(){
    printf("Input number of numbers: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &arr[i]);
    }

    printf("input k: ");
    int k;
    scanf("%d", &k);
    if(k>n){return 1;}
    selection_sort(k,arr, n);
    printf("%d ", arr[k-1]);
    return 0;
}