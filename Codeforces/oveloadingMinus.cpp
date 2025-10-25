#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    void display()
    {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
};

int main()
{
    Distance D1(3, 4), D2(-1, 10);
    D1.display();
    D2.display();
    return 0;
}