#include<iostream>
using namespace std;


int addFive(){
    d.meter += 5;
    return d.meter;
}

class Distance{
    private:
       int meter;
       friend int addFive(Distance);
    public:
        Distance:meter(0);
}


int main(){

}