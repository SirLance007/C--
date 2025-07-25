#include<iostream>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<long long> arr1;
    vector<long long> arr2;
    for(int i = 0; i < n ; i++){
        long long x;
        cin >> x;
        arr1.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        long long y;
        cin >> y;
        arr2.push_back(y);
    }
    long long mini1 = *min_element(arr1.begin(), arr1.end());
    long long mini2 = *min_element(arr2.begin(), arr2.end());
    if(mini1 < mini2){
        cout << 0 << endl;
        return;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}