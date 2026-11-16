/*Създайте рекурсивна функция binarySearch(arr, left, right, target), 
която чрез бинарно търсене намира число в сортиран във възходящ 
ред масив и връща индекса му или -1, ако числото не е намерено. 
Примерен вход: {2, 5, 8, 12, 16, 23, 38}, target = 23 => Изход: 5; target = 7 => Изход: -1*/

#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target){
    if(left>right){
        return -1;
    }

    int mid=(left+right)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarySearch(arr, left, mid-1, target);
    }
    else{
        return binarySearch(arr, mid+1, right, target);
    }

}

int main(){
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &arr[i]);
    }

    printf("Input target: ");
    int target;
    scanf("%d", &target);

    int res = binarySearch(arr, 0, n-1, target);
    printf("Index: %d", res);
    return 0;

}