#include <cmath>

int sigmoid(int x)
{
    return 1 / (1 + exp(-x));
}

void sigmoid_derivative(int x)
{
    return x * (1 - x)
}