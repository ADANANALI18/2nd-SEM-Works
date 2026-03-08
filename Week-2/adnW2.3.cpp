#include <stdio.h>

struct complex {
    float real;
    float imag;
};


struct complex addComplex(struct complex c1, struct complex c2);

int main() {
    struct complex c1, c2, sum;

    
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    
    sum = addComplex(c1, c2);

    
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}


struct complex addComplex(struct complex c1, struct complex c2) {
    struct complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}
