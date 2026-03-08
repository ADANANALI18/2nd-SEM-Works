#include <stdio.h>

struct time {
    int h;
    int m;
    int s;
};

int main() {
    struct time t1, t2, diff;

    // Input first time
    printf("Enter first time (HH MM SS): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    // Input second time
    printf("Enter second time (HH MM SS): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    // If seconds are smaller, borrow 1 minute
    if (t2.s < t1.s) {
        t2.s += 60;
        t2.m--;
    }

    diff.s = t2.s - t1.s;

    // If minutes are smaller, borrow 1 hour
    if (t2.m < t1.m) {
        t2.m += 60;
        t2.h--;
    }

    diff.m = t2.m - t1.m;
    diff.h = t2.h - t1.h;

    // Output
    printf("Time difference = %02d:%02d:%02d\n", diff.h, diff.m, diff.s);

    return 0;
}
