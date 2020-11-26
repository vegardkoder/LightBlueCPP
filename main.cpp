#include <iostream>
#include "modules.cpp"

int main()
{
  int X_train[] = {4, 5, 6};
  int y_train[] = {3, 4, 5};

  Sigmoid sigmoid;
  sigmoid = Sigmoid();
  sigmoid.train(X_train, y_train, 3);
}
