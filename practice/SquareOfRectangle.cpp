#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    // condition 1
    // all boxes in row wise
    if(b1 == b2 && b2 == b3){
        if(l1 + l2 + l3 == b1){
            cout << "YES" << endl;
            return;
        }
    }

    // condition 2
    // all boxes in column wise
    if(l1 == l2 && l2 == l3){
        if(b1 + b2 + b3 == l1){
            cout << "YES" << endl;
            return;
        }
    }

    // condition 3
    // one big box two small boxes in row
    if(l2 == l3){
        if(l1 + l2 == b1 && b1 == b2+b3){
            cout << "YES" << endl;
            return;
        }
    }

    // condition 4
    // one big two small boxes in column
    if(b2 == b3){
        if(l1 == b1+b2 && l1 == l2+l3){
            cout << "YES" << endl;
            return;
        }
    }


    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
