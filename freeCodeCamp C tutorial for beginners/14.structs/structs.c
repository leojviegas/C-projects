#include <stdio.h>
#include <stdlib.h>

//la Struct (estructura), es una plantilla
// (en otros lenguajes de programacion, una Class)
// se pone antes del int main()
struct Student
{
    char name[64];
    char major[64];
    int age;
    double gpa;
}; // <--no olvidarse de este punto y coma!

int main()
{
    struct Student student1;
    student1.age = 26;
    student1.gpa = 8.5;
    strcpy(student1.name, "Leonardo Viegas"); 
    strcpy(student1.major, "Music");
    //en las structs no se puede hacer "char string[10] = "string"
    //hay que usar la funcion strcpy

    printf("%s", student1.name);
    printf("\n");
    
    struct Student student2;
    student1.age = 20;
    student1.gpa = 9;
    strcpy(student2.name, "Angel David Revilla"); 
    strcpy(student2.major, "Perturbing");

    printf("%s", student2.major);
    



    return 0;
}