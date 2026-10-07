#include <string> 
#include <Eigen/Dense>


using namespace std;
using namespace Eigen;


class Image{
    public :
        string name; 
        MatrixXd data_2D;
        MatrixX<bool> data;
        VectorXd Data_stripped;
        double zoom;
        Vector2d pos;

        Image(string file_path);
        void change_layout();
    private :
        void load_image(string file_path);
        
        

};