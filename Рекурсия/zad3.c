/*Създайте рекурсивна функция, която обръща символен низ на място (с два индекса — начало и край). 
Примерен вход: "algorithm" => Изход: "mhtirogla".*/

#include <stdio.h>
#include <string.h>

void reverse(char s[], int first, int last){
    if(first>=last){
        return;
    }
    
    char temp = s[first];
    s[first] = s[last];
    s[last] = temp;

    reverse(s, first+1, last-1);

}

int main(){
    printf("Input string: ");
    char s[30];
    scanf("%s", s);

    int len = strlen(s)-1;
    reverse(s, 0, len);
    printf("%s", s);
    return 0;
}