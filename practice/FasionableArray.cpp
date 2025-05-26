#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int mini = arr[0];
    int maxi = arr[n-1];
    if((mini+maxi) % 2 == 0){
        cout << "0" << endl;
        return;
    }
    else{
        int index1 = 0;
        int index2 = 0;
        if(arr[0] % 2 == 0){
            for(int i = 0; i < n; i++){
                if(arr[i] % 2 != 0){
                    index1 = i;
                    break;
                }
            }
            for(int i = n-1; i >= 0; i--){
                if(arr[i] % 2 == 0){
                    index2 = i;
                    break;
                }
            }
            cout << min(index1 , (n-index2)-1) << endl;
            return;
        }
        else{
            for(int i = 0; i < n; i++){
                if(arr[i] % 2 == 0){
                    index1 = i;
                    break;
                }
            }
            for(int i = n-1; i >= 0; i--){
                if(arr[i] % 2 != 0){
                    index2 = i;
                    break;
                }
            }
            cout << min(index1 , (n-index2)-1) << endl;;
            return;
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}