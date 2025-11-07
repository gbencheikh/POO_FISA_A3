#include<iostream> 
#include <cmath>
using namespace std;

class Circle{
public :
    double x; 
    double y; 

    double r; 

    Circle(double x, double y, double r): x(x), y(y), r(r){}

    void set_pos(double x_, double y_){
        x = x_; 
        y = y_; 
    }

    double perimeter(){
        return 2 * M_PI * r; 
    }

    double area(){
        return M_PI * r * r; 
    }
}; 

class Rectangle{
public: 
    double x; 
    double y; 

    double w; 
    double h; 

    Rectangle(double x, double y, double w, double h): x(x), y(y), w(w), h(h){}

    void set_pos(double x_, double y_){
        x = x_; 
        y = y_; 
    }

    double perimeter(){
        return 2*(w+h);
    }

    double area(){
        return w*h; 
    }
};

int main(){
    Circle c = Circle(0,0,1);
    cout << c.perimeter() << endl; 
    c.set_pos(1,1);
    cout << "Coordinates of the center: (" << c.x << "," << c.y << ")" << endl; 

    Rectangle r = Rectangle(0,0,1,2);
    cout << r.perimeter() << endl; 
    r.set_pos(-1,-1);
    cout << "Coordinates of the top left corner: (" << r.x << ',' << r.y << ")" << endl;

    return 0; 
}