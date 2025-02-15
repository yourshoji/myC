#include <stdio.h> // lib for input and output functions like :printf
#include <stdlib.h>

int setup() {
    int x = 15;
    int y = 20;
    float xy = (float)x/y;

    printf("Hello world!\n");
    printf("%d\n", x - y); // printf can only prints out "String", so %d is needed for int
    printf("%f\n", xy);
    printf("%1.f\n", xy);


    return 0;
}
