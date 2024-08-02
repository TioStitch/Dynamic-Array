#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_CAPACITY 10

struct Array {
    int * allIndex;
    int length;
    int capacity;
};

struct Array *new() {
    struct Array * arrayList = malloc(sizeof(struct Array));

    arrayList->capacity = DEFAULT_CAPACITY;
    arrayList->allIndex = malloc(15 * sizeof(int));
    arrayList->length = 0;

    return arrayList;
};

void add(struct Array * array, int i) {

    int length = array->length;
    int capacity = array->capacity;

    array->allIndex[array->length] = i;
    array->length++;

    if (length+1 >= capacity) {
        array->allIndex = realloc(array->allIndex, 10 * sizeof(int));
        array->capacity += 10;

        printf("\nRealocando memória...");
    }
}

int get(struct Array * array, int index) {

    int length = array->length;

    if (index > length || index < 0) {
        perror("That index doesn't exist!");
        return EXIT_FAILURE;
    }

    return array->allIndex[index];
}

void set(struct Array * array, int index, int value) {

    int length = array->length;

    if (index > length || index < 0) {
        perror("That index doesn't exist!");
        return;
    }

    array->allIndex[index] = value;
}