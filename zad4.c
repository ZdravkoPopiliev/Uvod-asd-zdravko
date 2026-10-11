/*Направете
функция, която връща индекса, на който се намира дадено число в сортиран
масив или -1, ако числото не се среща. Функцията трябва да използва метода
на бинарното търсене за да намери къде се среща елемента. Примерен вход
1: {1, 2, 5, 7, 8, 10}, търсено число: 5 => Изход: 2. Примерен вход 2:
{1, 2, 5, 7, 8, 10}, търсено число 6 => Изход -1.*/

#include <stdio.h>

int search(int* a, int n, int wanted){
    int left=0, right=n-1;

    while(left<=right){
        int middle = (left+right)/2;
        if(wanted==a[middle]){
            return middle;
        }else if(wanted<a[middle]){
            right=middle-1;
        }else{
            left=middle+1;
        }
    }

    return -1;
}

int main(){
    int n;
    printf("Input n: ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        printf("Input number %d: ", i+1);
        scanf("%d", & a[i]);
    }

    int wanted;
    printf("Input wanted number: ");
    scanf("%d", &wanted);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }

    int r = search(a, n, wanted);

    if(r==-1){
        printf("Number not found.");
    }
    else{
        printf("Wanted numbers index: %d", r);
    }

    return 0;
}