#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int i, j, k, r1, c1, r2, c2, choice;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter elements of first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nChoose Operation\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of first matrix\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        if(r1==r2 && c1==c2){
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    result[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("\nAddition Result:\n");
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("Addition not possible\n");
        }
        break;

        case 2:
        if(r1==r2 && c1==c2){
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    result[i][j] = a[i][j] - b[i][j];
                }
            }

            printf("\nSubtraction Result:\n");
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++){
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("Subtraction not possible\n");
        }
        break;

        case 3:
        if(c1==r2){
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    result[i][j] = 0;
                    for(k=0;k<c1;k++){
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            printf("\nMultiplication Result:\n");
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("Multiplication not possible\n");
        }
        break;

        case 4:
        printf("\nTranspose of first matrix:\n");
        for(i=0;i<c1;i++){
            for(j=0;j<r1;j++){
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
        break;

        default:
        printf("Invalid choice");
    }

    return 0;
}
