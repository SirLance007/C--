#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    string a, b;
    cin >> a >> b;
    int count = 0;
    int index = 0;
    for(int i = 0; i < x ; i++){
        if(a[i] == b[index]){
            index++;
            count++;
        }
        else{
            while(a[i] != b[index] && index < y){
                index++;
                if(index == y){
                    cout << count << endl;
                    return;
                }
            }
            if(a[i] == b[index]){
                count++;
                index++;
            }
        }
        if( i == x-1){
            cout << count << endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}