#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    printf("Dad!\n");
    printf("Mom!\n");
    printf("Sister!\n");
    printf("I'm a new feature\n");
    printf("I'm the second feature\n");

    int i = 0;

    scanf("%d", &i);

    while (i < 10) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}