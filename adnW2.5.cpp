#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct student *s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    s = (struct student *)malloc(n * sizeof(struct student));

    // Check if memory allocated successfully
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input student information
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student information
    printf("\n--- Student Information ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll   : %d\n", s[i].roll);
        printf("Name   : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }

    // Free allocated memory
    free(s);

    return 0;
}
