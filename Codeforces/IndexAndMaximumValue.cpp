#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin >> n >> m;
    vector<int> num;
    int maxiIndex = 0;
    int maxi = 0;
    for(int i = 0; i < n ; i++){
        int num ;
        cin >> num;
        if(maxi > num){
            maxiIndex = i+1;
        }
        maxi = max(maxi , num);
    }
    for(int i = 0; i < m ; i++){
        int num1 , num2;
        char c;
        cin >> c >> num1 >> num2;
        if( maxiIndex >= num1 && num2 <= maxiIndex){
            if( c == '+'){
                cout << maxi + 1 << " ";
                maxi = maxi+1;
            }
            else{
                cout << maxi-1 << " ";
                maxi = maxi-1;
            }
        }
        else{
            cout << maxi << " ";
        }
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