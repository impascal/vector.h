#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

intVec* intVec_malloc(int n_elm) {   
    if(n_elm < 0) {
        puts("Impossible to create array with negative lenght.\n");
        return NULL;
    }

    intVec* v = (intVec*) malloc(sizeof(intVec));
    if(v == NULL) {
        puts("Error while initializing integer vector.\n");
    }

    v->arr = (int*) calloc(n_elm, sizeof(int));
    v->lenght = n_elm;

    return v;
}

void intVec_free(intVec* v) {
    free(v->arr);
    free(v);
}

intVec* intVec_append(intVec* v, int elm) {
    (v->arr) = (int*) realloc(v->arr, (v->lenght)*sizeof(int)+sizeof(int));
    if(v == NULL) {
        puts("Error while reallocating integer vector.\n");
        return NULL;
    }

    (v->lenght)++;
    (v->arr)[v->lenght - 1] = elm;
    return v;
}

intVec* intVec_cut(intVec* v) {
    (v->arr) = (int*) realloc(v->arr, (v->lenght)*sizeof(int)-sizeof(int));

    if(v->arr == NULL) {
        puts("Error while reallocating integer vector.\n");
        return NULL;
    }

    (v->lenght)--;

    return v;
}

void intVec_printf(intVec* v) {
    putchar('{');
    for(int i=0; i < v->lenght; i++) {
        printf(" %d ", (v->arr)[i]);
        if(i < (v->lenght)-1)
            putchar(',');
    }

    putchar('}');
}