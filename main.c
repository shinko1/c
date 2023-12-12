#include <stdio.h>

int main() {

    int too[5];

    printf("5n utga oruulna uu:\n");
    for (int i = 0; i < 5; i++) {
        printf("element %d-iin utga: ", i + 1);
        scanf("%d", &too[i]);
    }

    int hemjee = sizeof(too) / sizeof(too[0]);

    int niit = 0;

    for (int i = 0; i < hemjee; i++) {
        niit += too[i];
    }

    float ortsniiToo = (float)niit / hemjee;
    printf("niit utguudiin dundaj: %.2f\n", ortsniiToo);

    return 0;

}