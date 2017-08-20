#include <iostream>
#include <Eigen/Dense>
#include "logistic_layer.h"
using namespace Eigen;
using namespace std;

int main()
{

  MatrixXd input = MatrixXd::Random(32,16);
  LogisticLayer h1 (16, 512);
  LogisticLayer h2 (512, 1024);
  LogisticLayer h3 (1024, 4);

  // inference
  MatrixXd y = h1.activations(input);
  y = h2.activations(y);
  y = h3.activations(y);

  cout << "y =" << endl << y << endl;
}
