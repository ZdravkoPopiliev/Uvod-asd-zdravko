/*Имплементирайте
функциите selection_sort, bubble_sort (с флаг за ранно спиране) и
insertion_sort за масив от int. Изведете масива след всеки проход.
Примерен вход за selection_sort: {29, 10, 14, 37, 13} => {10, 29, 14,
37, 13}, {10, 13, 14, 37, 29}, {10, 13, 14, 37, 29}, {10, 13, 14, 29, 37}.*/

#include <stdio.h>

void selection_sort(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int k=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=k;
        }
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

void bubble_sort(int n, int arr[]){
    int swapped=0;
    for(int i=0; i<n; i++){
        swapped=0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
                swapped=1;
            }
        }
        if(!swapped){
            break;
        }
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

void insertion_sort(int n, int arr[]){
    for(int i=1; i<n; i++){
        for(int j=i; j>0 && arr[j]<arr[j-1]; j--){
            int k=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=k;
        }
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Input number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    insertion_sort(n, arr);
    return 0;
}