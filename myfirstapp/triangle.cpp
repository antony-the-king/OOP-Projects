#include <iostream>
using namespace std;

//define the triangle

class triangle{
    private :
        double base;
        double height;
    public:
        // contructor to initialize base and height
        triangle (double b ,double h):
        base(b),height(h){}

        //Member function to calculate the area of the triangle

        double calculatearea(){
            return 0.5 * base * height;
        }

};
    int main(){
        //Create two instances of triangle
        triangle inst1(20,10);
        triangle inst2(16,12);

        //output the area of each triangle

        cout<< "Area of Triangle inst1 is: "<<inst1.calculatearea()<<endl;
        cout<<"Area of triangle inst2 is:  "<<inst2.calculatearea()<<endl;

        return 0;
    }