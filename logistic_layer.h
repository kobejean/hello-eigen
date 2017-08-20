#include <Eigen/Dense>

class LogisticLayer {
  Eigen::MatrixXd w;
  Eigen::VectorXd b;
  public:
    LogisticLayer (int, int);
    LogisticLayer (Eigen::MatrixXd, Eigen::VectorXd);
    Eigen::MatrixXd activations (Eigen::MatrixXd);
    Eigen::MatrixXd gradient (Eigen::MatrixXd);
};
