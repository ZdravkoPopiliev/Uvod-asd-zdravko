/*Добавете
брояч на сравненията и на размените (преместванията) във всяка от трите
функции. Изпълнете ги за {5, 1, 4, 2, 8}, за вече сортиран масив {1, 2, 3,
4, 5} и за обратно сортиран {5, 4, 3, 2, 1}. Кой алгоритъм работи
най-добре за сортирания масив? - Най-добре работят bubble и insertion sort, защото правят само по 5 проверки.
(Подсказка: selection sort винаги прави 10
сравнения за 5 елемента.)*/

#include <stdio.h>

void selection_sort(int n, int arr[]){
    int comparison=0;
    int swap=0;
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
            comparison++;
        }
        if(minIndex!=i){
            int k=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=k;
            swap++;
        }
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    printf("Comparisons: %d\n", comparison);
    printf("Swaps: %d\n", swap);
}

void bubble_sort(int n, int arr[]){
    int swapped=0;
    int comparison=0;
    int swap=0;
    for(int i=0; i<n; i++){
        swapped=0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
                swapped=1;
                swap++;
            }
            comparison++;
        }
        if(!swapped){
            break;
        }
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    printf("Comparisons: %d\n", comparison);
    printf("Swaps: %d\n", swap);
}

void insertion_sort(int n, int arr[]){
    int comparison=0;
    int swap=0;
    for(int i=1; i<n; i++){
        for(int j=i; j>0 && arr[j]<arr[j-1]; j--){
            int k=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=k;
                comparison++;
                swap++;
        }
        comparison++;
        for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    printf("Comparisons: %d\n", comparison);
    printf("Swaps: %d\n", swap);
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
    int a=0;
    printf("Select sorting algorithum\n1.Selection sort\n2.Bubble sort\n3.Insertion sort\n");
    scanf("%d", &a);
    switch (a){
    case 1:
        selection_sort(n, arr);
        break;
    case 2:
        bubble_sort(n, arr);
        break;
    case 3:
        insertion_sort(n, arr);
        break;    
    default:
        printf("Invalid value!");
        return 1;
    }
    return 0;
}