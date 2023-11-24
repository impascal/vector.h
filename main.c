#include <stdio.h>
#include "vector.h"

int main() {

    /* this is how u make an array of 1 element*/
    intVec* v = intVec_malloc(1);

    /* you access to the element i with the syntax: vector_name->arr[i] */
    v->arr[0] = 1; 

    /* you append elements this way */
    intVec_append(v, 19);
    intVec_append(v, 65);

    /* printing array to the stdout */
    intVec_printf(v);

    /* printing lenght of the array */
    printf("Size: %zu", v->lenght);

    /* remember to free everything you allocate */
    intVec_free(v);

    putchar('\n');
    return 0;
}