
#include "utilities/Image.h"
#include "utilities/StringObject.h"
#include "utilities/Nail.h"
#include "utilities/Printer.h"
#include <vector>

using namespace std;

class Model{
    public : 
        Printer printer;
        vector<StringObject> strings = {};
        vector<Nail> nails = {};
        vector<FixationPoint> fixation_points = {};
        Image image;
        double strings_width;
        double nails_width;
        double circle_size;

        void load_image(string file_path){
            image = Image(file_path);
            update_image();
        }
        void change_nails_count(int count){
            update_nails();
        };
        void change_nails_width(double width){
            nails_width = width;
            generate_fixation_points();
            update_strings();
        };
        void change_string_width(double width){
            strings_width = width;
            update_strings();
        };
    

    private :
        void update_image();
        void update_nails();
        void update_strings();
        void generate_fixation_points();
        void generate_nails();

};