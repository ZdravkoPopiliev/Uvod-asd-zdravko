/*Сортирайте
масив от цели положителни числа възходящо по сумата от цифрите им. При
равна сума числата трябва да запазят реда си (използвайте стабилен
алгоритъм). Примерен вход: {56, 23, 9, 111, 40} => Изход: {111, 40, 23,
9, 56}.*/

#include <stdio.h>

int add(int k){
    int sum = 0;
    while(k>0){
        sum+=k%10;
        k=k/10;
    }
    return sum;
}

void sort(int n, int arr[]){
    for(int i=1; i<n; i++){
        for(int j=i; j>0 && add(arr[j])<add(arr[j-1]); j--){
            int k=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=k;
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

    sort(n,arr);
    for(int j=0; j<n; j++){
            printf("%d ", arr[j]);
        }
    return 0;
}