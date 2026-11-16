/*Създайте рекурсивна функция, която проверява дали низ е палиндром. 
Примерен вход: "racecar" => Изход: 1; "tues" => Изход: 0.*/

#include <stdio.h>
#include <string.h>

int palindrome(char s[], int first, int last){
    if(first>=last){
        return 1;
    }
    
    if(s[first]!=s[last]){
        return 0;
    }

    return palindrome(s, first+1, last-1);
}

int main(){
    printf("Input string: ");
    char s[30];
    scanf("%s", s);

    int len = strlen(s)-1;
    int result = palindrome(s, 0, len);
    printf("%d", result);
    return 0;
}