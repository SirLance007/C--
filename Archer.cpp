#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double p = static_cast<double>(a) / b;
    double q = static_cast<double>(c) / d;
    double r = p + q - (p * q);
    
    double probability = p / r;
    cout << probability << endl;
    
    return 0;
}