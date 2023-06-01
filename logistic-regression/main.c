#include <stdio.h>
#include "../lib/matils.h"
#include <math.h>

void logisticFit(double *x, float *out, int size);

int main()
{
    double x_train[5][5] = {
        {1, 2, 3, 1, 2},
        {0, 2, 1, 4, 1},
        {0, 0, 1, 3, 2},
        {2, 3, 4, 2, 1},
        {1, 2, 1, 2, 1},
    };
    double y_train[5] = {0, 1, 0, 1, 1};
    int rows, cols;
    rows = 5, cols = 5;
    double *wsArr = malloc(rows * sizeof(double));
    weightedSum(x_train, wsArr, rows, cols);
}

void logisticFit(double *x, float *out, int size)
{
    for (int i = 0; i < size; i++)
    {
        out[i] = 1 / (1 + exp(-1 * x[i]));
    }
}