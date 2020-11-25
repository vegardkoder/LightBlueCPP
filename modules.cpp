class Sigmoid
{
public:
  void train(int X[], int y[], int iterations)
  {
    for(int i=0; i < iterations; i++)
    {
      std::cout << X[i] << y[i] << "\n";
    }
  }
};
