#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int flag = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] > 1){
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << endl;
        }
    }
}