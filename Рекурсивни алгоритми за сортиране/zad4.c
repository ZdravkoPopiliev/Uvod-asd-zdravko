/*Измерете времето (clock() от <time.h>) за сортиране на масиви с 10 000, 20 000 и 40 000 
случайни числа с bubble sort, merge sort и quick sort. 
Използвайте srand с фиксирано число, за да сортирате едни и същи данни. 
Попълнете таблица и опишете какво се случва с времето при удвояване на n.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 40000

int original[N];
int arr[N];
int tmp[N];

void copy_array(int from[], int to[], int n) {
    for (int i = 0; i < n; i++) {
        to[i] = from[i];
    }
}

void merge(int a[], int left, int mid, int right, int target[]){
    int i=left;
    int j=mid+1;
    int t=left;
    while(i<=mid && j<=right){
        if(a[i]<a[j]){
            target[t++]=a[i++];
        }
        else{
            target[t++]=a[j++];
        }
    }
    while(i<=mid){
        target[t++]=a[i++];
    }
    while(j<=right){
        target[t++]=a[j++];
    }

    for(int p=left; p<=right; p++){
        a[p] = target[p];
    }
}

void mergeSort(int a[], int left, int right, int target[]){
    if(left>=right){
        return;
    }

    int mid=(left+right)/2;
    mergeSort(a, left, mid, target);
    mergeSort(a, mid+1, right, target);
    merge(a,left,mid,right,target);

}

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int pivot(int a[], int left, int right){
    int p = a[right];
    int i=left;

    for(int j=left; j<right; j++){
        if(a[j]<p){
            swap(a, i, j);
            i++;
        }
    }
    swap(a, i, right);
    return i;

}

void quickSort(int a[], int left, int right){
    if(left>=right){
        return;
    }

    int p = pivot(a, left, right);
    quickSort(a, left, p-1);
    quickSort(a, p+1, right);
    
}

void bubble_sort(int n, int a[]){
    int swapped=0;
    for(int i=0; i<n; i++){
        swapped=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a, j, j+1);
                swapped=1;
            }
        }
        if(!swapped){
            break;
        }
        
    }
}

void print_time(clock_t start) {
    double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("%10.3f", seconds);
}

int main(){
    int sizes[3] = {10000, 20000, 40000};
    int count = 3;

    srand(24);

    for (int i = 0; i < N; i++) {
        original[i] = rand();
    }

    printf("Time in second\n\n");
    printf("%8s%10s%10s%10s%10s\n", "N", "Bubble", "Merge", "Quick", "Q. worst");

    for(int j=0; j<count; j++){
        int n=sizes[j];
        clock_t start;
        printf("%8d", n);

        copy_array(original, arr, n);
        start = clock();
        bubble_sort(n, arr);
        print_time(start);


        int target[n];
        copy_array(original, arr, n);
        start = clock();
        mergeSort(arr, 0, n-1, target);
        print_time(start);

        copy_array(original, arr, n);
        start = clock();
        quickSort(arr, 0, n-1);
        print_time(start);

        start = clock();
        quickSort(arr, 0, n-1);
        print_time(start);

        printf("\n");
    }

    return 0;

}