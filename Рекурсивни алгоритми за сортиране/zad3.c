/*Имплементирайте quick sort със схемата на Ломуто (опорен елемент — последният). 
Изведете масива след всяко разделяне. 
Примерен вход: {10, 80, 30, 90, 40, 50, 70} => след първото разделяне: {10, 30, 40, 50, 70, 90, 80}.*/

#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int pivot(int arr[], int left, int right){
    int p = arr[right];
    int i=left;

    for(int j=left; j<right; j++){
        if(arr[j]<p){
            swap(arr, i, j);
            i++;
        }
    }
    swap(arr, i, right);
    return i;

}

void quickSort(int arr[], int left, int right){
    if(left>=right){
        return;
    }

    int p = pivot(arr, left, right);
    quickSort(arr, left, p-1);
    quickSort(arr, p+1, right);
    
}

int main(){
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = 7;

    quickSort(arr,0, n-1);
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}