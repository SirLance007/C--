#include <iostream>
using namespace std;

class Animal
{
    static string name;

public:
    static string func()
    {
        cout << "The name of the animal is : " << name << endl;
    }
};

string Animal::name = "Lion";
int main()
{
    Animal node;
    node.func();
}