/*Намерете
сечението (еднаквите елементи от двата масива) и обединението (сортираното обединение на числата
от двата масива) на два сортирани масива A и B с едно
преминаване и два индекса, без повторно сортиране. Примерен вход: A = {1,
3, 5, 7, 9}, B = {3, 4, 5, 8, 9} => Изход: сечение {3, 5, 9},
обединение {1, 3, 4, 5, 7, 8, 9}.*/

#include <stdio.h>

int main(){

    printf("Input number of numbers of array 1: ");
    int n;
    scanf("%d", &n);
    int A1[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &A1[i]);
    }
    printf("Input number of numbers of array 2: ");
    int k;
    scanf("%d", &k);
    int A2[k];
    for(int i=0; i<k; i++){
        printf("Input number: ");
        scanf("%d", &A2[i]);
    }

    int A3[n+k];
    int A4[n+k];
    int a3 = 0;
    int a4 = 0;
    int i=0, j=0;

    while(i<n && j<k){
        if(A1[i]<A2[j]){
            A3[a3++]=A1[i++];
        }
        else if(A1[i]>A2[j]){
            A3[a3++]=A2[j++];
        }
        else{
            A3[a3++]=A1[i++];
            A4[a4++]=A2[j++];
        }
    }

    while(i<n){
        A3[a3++]=A1[i++];
    }

    while(j<k){
        A3[a3++]=A2[j++];
    }

    printf("Sechenie: ");
    for(int m=0; m<a4; m++){
        printf("%4d", A4[m]);
    }

    printf("\nObedinenie: ");
    for(int m=0; m<a3; m++){
        printf("%4d", A3[m]);
    }


    return 0;
}