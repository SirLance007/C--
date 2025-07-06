#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , r , b;
    cin >> n >> r >> b;
    int rem;
    int remaining;
    rem = r / (b+1);
    remaining = r % (b+1);

    int cnt;
    if(remaining > 0){
        cnt = rem + 1;
        remaining--;
    }
    else{
        cnt = rem;
    }

    for(int i = 0 ; i < n ; i++){
        if(cnt != 0){
            cout << "R";
            cnt--;
        }
        else{
            if(b >= 1){
                cout << "B";
                b--;
                if(remaining > 0){      // fixed this line
                    cnt = rem + 1;
                    remaining--;
                }
                else{
                    cnt = rem;
                }
            }
            else{
                cout << "R";
            }
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
