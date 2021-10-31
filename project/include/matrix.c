#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix{
    size_t line;
    size_t column;
    double** data;
} Matrix;

Matrix* create_matrix(const int line_of_matrix, const int column_of_matrix){

    Matrix* new_matrix = malloc(sizeof(Matrix));
    if (new_matrix == NULL){
        free(new_matrix);
        return NULL;
    }
    new_matrix->data = malloc(sizeof(double*)*line_of_matrix);
    if (new_matrix->data == NULL)
    {
        free(new_matrix->data);
        free(new_matrix);
        return NULL;
    }
    for (size_t i = 0; i < line_of_matrix; ++i)
    {
        new_matrix->data[i] = malloc(column_of_matrix*sizeof(double));
        if (new_matrix->data[i] == NULL){
            for (; i!=0; --i)
            {
                free(new_matrix->data[i]);
            }
            free(new_matrix->data);
            free(new_matrix);
            return NULL;
        }
    }
    return new_matrix;
}