/*Имплементирайте merge sort с помощен масив. 
Примерен вход: {38, 27, 43, 3, 9, 82, 10} => Изход: {3, 9, 10, 27, 38, 43, 82}.*/

#include <stdio.h>

void merge(int arr[], int left, int mid, int right, int target[]){
    int i=left;
    int j=mid+1;
    int t=left;
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            target[t++]=arr[i++];
        }
        else{
            target[t++]=arr[j++];
        }
    }
    while(i<=mid){
        target[t++]=arr[i++];
    }
    while(j<=right){
        target[t++]=arr[j++];
    }

    for(int p=left; p<=right; p++){
        arr[p] = target[p];
    }
}

void mergeSort(int arr[], int left, int right, int target[]){
    if(left>=right){
        return;
    }

    int mid=(left+right)/2;
    mergeSort(arr, left, mid, target);
    mergeSort(arr, mid+1, right, target);
    merge(arr,left,mid,right,target);

}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    int target[n];
    int left = 0;
    int right = n-1;
    mergeSort(arr,left,right,target);

    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }
    return 0;
    
}