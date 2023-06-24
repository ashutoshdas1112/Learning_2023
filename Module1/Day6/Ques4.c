#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    float marks;
};

void sort_marks(struct Student *students, int n)
{
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (students[i].marks < students[j].marks)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main()
{
    struct Student students[2]={
    	{"Abhisek",10.1},
    	{"SreeRam",23.0}
	};

    sort_marks(students, 2);

    printf("Sorted students in descending order based on marks:\n");
    int i;
    for (i = 0; i < 2; i++)
    {
        printf(" Name: %s, Marks: %.2f\n",students[i].name, students[i].marks);
    }
    return 0;
}
