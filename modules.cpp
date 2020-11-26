#include "activationFunctions.cpp"

class Sigmoid
{
public:
  float weights[] = {};

  void train(int X[], int y[], int iterations)
  {
    for(int i = 0; i < iterations; i++)
    {
      for(int j = 0; j < sizeof(X)/sizeof(X[0]; j++)
      {
        std::cout << sigmoid(X[i]) << " " << sigmoid(y[i]) << "\n";     
      }
    }
  }
};
