/*  
*   A simple (or stupid if you want, useless even) library to implement 
*   an interface to dynamic arrays in C, for basic types only. As it is
*   it just works with integers.
*
*   It supports simple operations, such as creating and deleting dynamic 
*   arrays, appending elements or cutting them out, formatted printing 
*   to stdout and automatically managing array size.
*/

#ifndef _INC_VECTOR_H
#define _INC_VECTOR_H

#include <stdlib.h>

#define _VEC_MAX_LENGHT 256

typedef struct {

    int* arr;
    size_t lenght;

} intVec;

intVec* intVec_malloc(int n_elm);
void intVec_free(intVec* v);
intVec* intVec_append(intVec* v, int elm);
intVec* intVec_cut(intVec* v);
void intVec_printf(intVec* v);

#endif