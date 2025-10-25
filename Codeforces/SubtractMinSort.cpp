#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    vector<int> arr;
    arr = ans;
    sort(arr.begin(),arr.end());
    if(arr == ans){
        cout << "YES" << endl;
        return;
    }
    int last = arr[n-1];
    if(arr[0] != last){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}