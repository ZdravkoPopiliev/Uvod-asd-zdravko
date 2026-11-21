/*Имплементирайте функция merge,
 която слива два сортирани масива в трети. 
 Примерен вход: {1, 4, 7, 10} и {2, 3, 9} => Изход: {1, 2, 3, 4, 7, 9, 10}.*/

 #include <stdio.h>

void merge(int a1[], int a2[], int n, int k, int target[]){
    int i=0;
    int j=0;
    int t=0;
    while(i<n && j<k){
        if(a1[i]<a2[j]){
            target[t++]=a1[i++];
        }
        else{
            target[t++]=a2[j++];
        }
    }
    while(i<n){
        target[t++]=a1[i++];
    }
    while(j<k){
        target[t++]=a2[j++];
    }
    return;
}

int main()
{   int n=4, k=3;
    int arr1[] = {1, 4, 7, 10};
    int arr2[] = {2, 3, 9};
    int target[n+k];
    merge(arr1, arr2, n,k, target);
   
    for(int i=0; i<7; i++){
        printf("%d ", target[i]);
    }

    return 0;
}
