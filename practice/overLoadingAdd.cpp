#include<iostream>
using namespace std;

class Count{

    int x,y;
    public:
    void inp(){
        cout << " Input two complex number : " << endl;
        cin >> x >> y;
    }

    Complex_num Operator(Complex_num obj){
        // creating an object
        Complex_num A;
        A.x = x + obj.x;
        A.y = y + obj.y;
        return A;
    }
    void print(){
        cout << x << "+" << y << endl;
    }

    void print2(){
        cout << x << "-" << y << endl;
    }

    
};

int main(){

}