#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m , a;
    cin >> n , m ,a;
    long long area = n*m;
    long long square = a*a;
    long long  count = round(area/square);
    cout << count << endl;
}

int main(){
    solve();
}