/*Направете
insertion sort, който сортира низходящо. Примерен вход: {3, 8, 1, 9, 4}
=> Изход: {9, 8, 4, 3, 1}.*/

#include <stdio.h>

void insertion_sort(int n, int arr[]){
    for(int i=1; i<n; i++){
        for(int j=i; j>0 && arr[j]>arr[j-1]; j--){
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