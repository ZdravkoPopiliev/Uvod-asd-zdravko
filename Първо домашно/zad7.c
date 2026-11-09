/*Да се
направи структура “student”, която да съдържа данните за даден ученик: име
(до 20 символа), номер в клас и среден успех. Да се създаде един ученик
във функцията main и да се принтират данните за него на екрана.*/

#include <stdio.h>

typedef struct{
    char name[20];
    float avrGrade;
    int number;
} student;

int main(){
    student stud = {
        "Atanas",
        6.00,
        2
    };
    printf("Student name: %s\n", stud.name);
    printf("Student avrage grade: %.2f\n", stud.avrGrade);
    printf("Student number: %d\n", stud.number);
    return 0;
}