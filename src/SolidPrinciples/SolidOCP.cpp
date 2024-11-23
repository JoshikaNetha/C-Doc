#include <iostream>

using namespace std;

// Open Close Principle
/*A Software entities is open for extention and close of modification*/
class Shape{
    public:
    virtual double area() = 0;
};
class Circle :public Shape{
    double radius;
    public:
    Circle(double rad): radius(rad){

    }
    double area(){
       return 3.14 * radius * radius;
    }
};
class Rectangle :public Shape{
    double _height,_width;
    public:
    Rectangle(double height,double width):_height(height),_width(width){

    }
    double area(){
       return _height * _width ;
    }
};
int main(){
    Circle cir(5.5);
    Rectangle rect(20,30);
    
    cout<<"Rectangle Area "<<rect.area()<<endl;
    cout<<"Circular Area "<<cir.area()<<endl;


}