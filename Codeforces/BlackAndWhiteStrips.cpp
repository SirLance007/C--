#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    string str;
    cin >> str;
    int black = 0;
    int left = 0;
    int maxi = 0;

    if( k == 1 ){
        for(int i = 0; i < n ; i++){
            if(str[i] == 'B'){
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }

    for(int i = 0; i < n ; i++){
        if(str[i] == 'B'){
            black++;
        }
        if(i - left + 1 == k){
            maxi = max(maxi , black);
            if(str[left] == 'B'){  
                black--;
            }
            left++;
        }
    }
    cout << k - maxi << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
