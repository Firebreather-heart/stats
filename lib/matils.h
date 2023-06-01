#include <stdlib.h>
#include "random.h"

/*
 * The function returns the sum of the elements of an array
 * @arr: a pointer to the arr variable
 * @size: the size of the array
 */
double sum_array(double *arr, int size);

/*
 * The function returns the mean of the elements of an array
 * @arr: a pointer to the arr variable
 * @size: the size of the array
 */
double mean(double *arr, int size);

/*
 * The function returns the mean deviation of the elements of an array
 * @arr: a pointer to the arr variable
 * @size: the size of the array
 */
double *mean_dev(double *arr, int size);

/*
 * The function returns the squared deviation of the elements of an array
 * @arr: a pointer to the arr variable
 * @size: the size of the array
 */
double *squared_dev(double *arr, int size);

/*
 * The function returns the variance of the elements of an array
 * @arr: a pointer to the arr variable
 * @size: the size of the array
 */
double variance(double *arr, int size);

/*
 * The function returns an array of the products of two arrays
 * @x: a pointer to the x array
 * @y: a pointer to the y array
 * @size: the size of the array
 */
double *array_mul(double *x, double *y, int size);

/*
 * The function returns the covariance of two arrays
 * @x: a pointer to the x array
 * @y: a pointer to the y array
 * @size: the size of the array
 */
double covariance(double *x, double *y, int size);

/*
 * The function returns the regression intercept
 * @x: a pointer to the x array
 * @y: a pointer to the y array
 * @size: the size of the array
 */
double intercept(double *x, double *y, int size);

double *fit_model(double *x, double *y, int size, double *params);

double slope(double *x, double *y, int size);

double *predict(double *x, double *params, int size, double *p_arr);

/*
 * This function will return a weighted sum using randomly generated weights
*/
double *weightedSum(double **arr, double *wsArr, int width, int size);
void multiplyMatrices(double **A, double **B, double **C, int rowsA, int colsA, int colsB);