#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout << "Drawing Shape..." << endl;
        }
};

class Circle : public Shape{
    public:
        virtual void draw(){
            cout << "Drawing Circle..." << endl;
        }
};

class Rectangle : public Shape{
    public:
        virtual void draw(){
            cout << "Drawing Rectangle..." << endl;
        }
};

int main(){
    Shape *s;
    Shape sh;
    Circle c;
    Rectangle r;
    s = &r;
    s->draw();
}