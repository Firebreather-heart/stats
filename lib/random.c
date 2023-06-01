#include "random.h"

int randint(int min, int max)
{
    srand(time(NULL));
    return min + rand() % (max - min + 1);
}

float randfloat(float min, float max)
{
    srand(time(NULL));
    float rf = ((float)rand() / RAND_MAX) * (max - min) + min;
    return rf;
}

float *getWeights(int num_weights){
    int weights[num_weights];
    for (int i = 0; i < num_weights; i++)
        weights[i] = randfloat(0, 1);
    return weights;
}

