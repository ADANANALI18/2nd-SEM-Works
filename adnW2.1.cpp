#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    getchar();

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Information ---\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    return 0;
}



