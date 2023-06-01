#include <stdlib.h>
#include <time.h>

/**
 * This function returns a random integer within the specified range
 * @min: the lower boundary
 * @max: the upper boundary
 */
int randint(int min, int max);

/**
 * This function returns a random float within the specified range
 * @min: the lower boundary
 * @max: the upper boundary
 */
float randfloat(float min, float max);

/*
 * This function returns an array of weights as specified
 * @num_weights: the number of weights needed
*/
float *getWeights(int num_weights);