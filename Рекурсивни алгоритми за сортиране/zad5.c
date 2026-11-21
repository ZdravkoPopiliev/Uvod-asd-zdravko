/*Пуснете quick sort върху вече сортиран масив с 20 000 елемента и сравнете времето със случаен масив. 
Направете вариант, в който опорен е средният елемент, и повторете измерването.*/

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

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int pivot(int a[], int left, int right){
    int mid = (left+right)/2;
    swap(a,mid,right);
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

void print_time(clock_t start) {
    double seconds = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("%10.3f", seconds);
}

int main(){
    srand(42);


    for (int i = 0; i < N; i++) {
        original[i] = rand();
    }
    clock_t start;

    copy_array(original, arr, N);
    start = clock();
    quickSort(arr, 0, N - 1);
    print_time(start);

    copy_array(original, arr, N);
    start = clock();
    quickSort(arr, 0, N - 1);
    print_time(start);

    return 0;
}