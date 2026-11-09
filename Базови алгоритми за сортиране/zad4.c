/*Сортирайте
масив от имена char names[][20] по азбучен ред с bubble sort, като
използвате strcmp и strcpy. Примерен вход: {"Maria",
"Ivan", "Georgi", "Boris",
"Elena"} => Изход: Boris, Elena, Georgi, Ivan, Maria.*/

#include <stdio.h>
#include <string.h>

void bubble_sort(int n, char arr[][20]){
    int swapped=0;
    for(int i=0; i<n-1; i++){
        swapped=0;
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
                swapped = 1;
            }
        }
        
        if(!swapped){
            break;
        }
    }
}

int main(){
    int n=0;
    printf("Input number of names: ");
    scanf("%d", &n);
    char arr[n][20];
    for(int i=0; i<n; i++){
        printf("input name: ");
        char current[20];
        scanf("%s", current);
        strcpy(arr[i], current);
    }
    
    bubble_sort(n,arr);

    for(int i=0; i<n; i++){
        for(int j=0; j<strlen(arr[i]); j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}