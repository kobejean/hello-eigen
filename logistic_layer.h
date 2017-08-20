#include <Eigen/Dense>

class LogisticLayer {
  public:

    Eigen::MatrixXd w;
    Eigen::VectorXd b;
    LogisticLayer (int, int);
    LogisticLayer (Eigen::MatrixXd, Eigen::VectorXd);
    Eigen::MatrixXd activations (Eigen::MatrixXd);
    Eigen::MatrixXd gradient (Eigen::MatrixXd);
};
