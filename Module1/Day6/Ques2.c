#include <stdio.h>
#include <string.h>
struct Student
{
    int RollNo;
    char name[20];
    float Marks;
};
typedef struct Student Student;
void initStudent(Student *, int, char *, float);
int main()
{
    int size = 2;
    int rollNo;
    char n[20];
    float marks;
    Student arr[size]; // 
    printf("Scanning\n");
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &rollNo);
        scanf("%s", n);
        scanf("%f", &marks);
        initStudent(&arr[i], rollNo, n, marks);
    }
    return 0;
}
void initStudent(Student *ptr, int rollNo, char *nptr, float Marks)
{
    // initialize structure's members
    ptr->RollNo = rollNo;
    ptr->Marks = Marks;
    strcpy(ptr->name, nptr);
}

