/*Пребройте
колко пъти стойността v се среща в сортиран масив A. Използвайте факта, че
равните елементи са един до друг (например с двоично търсене на първата и
на последната позиция). Примерен вход: A = {1, 2, 2, 2, 3, 5, 5}, v = 2
=> Изход: 3.*/

#include <stdio.h>

int last(int v, int A[], int n){
    int left=0;
    int right=n-1;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(A[mid]==v){
            index=mid;
            left=mid+1;
        }
        else if(A[mid]>v){
            right=mid-1;
        }
        else{left=mid+1;}
    }
    return index;
}

int first(int v, int A[], int n){
    int left=0;
    int right=n;
    int index=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(A[mid]==v){
            index=mid;
            right=mid-1;
        }
        else if(A[mid]>v){
            right=mid-1;
        }
        else{left=mid+1;}
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
    
    int First = first(v,A,n);
    int Last = last(v,A,n);
    int count=0;

    if(First==-1 && Last==-1){
        printf("Value not found.");
        return 1;
    }
    else{
        for(int i=First; i<=Last; i++){
            count++;
        }
        printf("Value found %d times.", count);
    }
    return 0;
}
