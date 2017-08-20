#include <unsupported/Eigen/MatrixFunctions>
#include "logistic_layer.h"

LogisticLayer::LogisticLayer (int num_inputs, int num_neurons) {
  w = Eigen::MatrixXd::Random(num_inputs, num_neurons);
  b = Eigen::VectorXd::Random(num_neurons);
}

LogisticLayer::LogisticLayer (Eigen::MatrixXd weights, Eigen::VectorXd bias) {
  w = weights;
  b = bias;
}

Eigen::MatrixXd LogisticLayer::activations (Eigen::MatrixXd input) {
  Eigen::MatrixXd z = (input.matrix() * w);//.array().colwise() + b.array();
  return (1.0 + (-z).array().exp()).inverse().matrix();
}
