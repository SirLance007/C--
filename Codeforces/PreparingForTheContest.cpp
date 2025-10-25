#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<iomanip>
using namespace std;

void solve(){
    long long n , k;
    cin >> n >> k;
    for(int i = 0; i < k ; i++){
        cout << i+1 << " ";
    }
    for(int i = n ; i > k ; i--){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}