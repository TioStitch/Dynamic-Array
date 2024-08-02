#include <stdio.h>
#include <stdlib.h>
#include "array.c"


int main() {

    struct Array * arrayList = new();

    for (int i = 0; i <= 120; i++) {
        add(arrayList, 1);
    }

    printf("\n2th index of Array: %i", get(arrayList, 1));
    free(arrayList);

    return EXIT_SUCCESS;
}