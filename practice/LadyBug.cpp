#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    int countA = 0;
    int countB = 0;
    for(int i = 0; i < a.length() ; i++){
        if(a[i] == '0'){
            countA++;
        }
        if(b[i] == '0'){
            countB++;
        }
    }
    if(countB < countA){
        cout << "NO" << endl;
        return;
    }
    else{
        for(int i = 0; i < a.length() ; i++){
            if(a[i] == '1'){
                if()
            }
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}