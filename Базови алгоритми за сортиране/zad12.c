/*Намерете
две стойности x и y от сортиран масив A, така че x + y = z, като
използвате два индекса (единият в началото, другият в края на масива). Примерен вход: A
= {1, 3, 4, 6, 8, 11}, z = 10 => Изход: x = 4, y = 6.*/

#include <stdio.h>

int main(){
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        printf("Input number: ");
        scanf("%d", &A[i]);
    }

    printf("Input z: ");
    int z;
    scanf("%d", &z);

    int x=0;
    int y=n-1;

    while(y>x){
        if(A[x]+A[y]==z){
            printf("x = %d, y = %d", A[x], A[y]);
            x++;
            y--;
        }
        else if(A[x]+A[y]<z){
            x++;
        }
        else{
            y--;
        }
    }

    return 0;
}