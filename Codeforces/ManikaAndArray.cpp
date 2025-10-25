#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if( n == 1){
        cout << 0 << endl;
        return;
    }
    vector<int> arr2 = arr;
    sort(arr2.begin() , arr2.end());
    int maxi = arr2[n-1];
    int mini = arr2[0];
    for(int i = 1; i < n ; i++){
        if(arr[i-1] == maxi && arr[i] == mini){
            cout << maxi-mini << endl;
            return;
        }
    }
    if(arr[0] == mini || arr[n-1] == maxi){
        cout << maxi - mini << endl;
    }
    else if(arr[0] == mini){
        cout << maxi - mini << endl;
    }
    else if(arr[n-1] == maxi){
        cout << maxi - mini << endl;
    }
    else{
        int first = maxi-arr[0];
        int last = arr[n-1] - mini;
        cout << max(first , last) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}