#include<iostream>
#include<string>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string final;
    cin >> final;
    char insertDigit = k + '0';

    for(int i = 0; i < n; i++){
        if(final[i] < insertDigit){
            cout << final.substr(0, i) + insertDigit + final.substr(i) << endl;
            return;
        }
    }

    cout << final + insertDigit << endl;  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
