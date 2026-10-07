#include <string> 
#include <Eigen/Dense>
#include "model/Model.h"
using namespace std;
using namespace Eigen;

class Solver{
    public :
        string name; 
        void load_from_model(Model *model);
        VectorXd solve();
};


