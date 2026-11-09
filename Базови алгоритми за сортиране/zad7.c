/*Напишете
функция, която търси стойност v в сортиран масив A чрез двоично търсене и
връща индекса ѝ (или -1, ако липсва). Примерен вход: A = {2, 5, 8, 12, 16,
23, 38}, v = 16 => Изход: 4; за v = 7 => Изход: -1.*/

#include <stdio.h>

int search(int v, int A[], int n){
    int left=0;
    int right=n-1;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(A[mid]<v){
            left=mid+1;
        }
        else if(A[mid]>v){
            right=mid-1;
        }
        else{index=mid;break;}
    }
    return index;
}

int main(){
    printf("Input number of numbers: ");
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &A[i]);
    }

    printf("input value to search for: ");
    int v;
    scanf("%d", &v);

    int res = search(v, A, n);
    printf("Wanted number index: %d", res);

    return 0;
}