#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x1 , p1, x2 , p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;
    string ans1 = to_string(x1);
    string ans2 = to_string(x2);
    int count1 = ans1.size();
    int count2 = ans2.size();
    if( p1 == p2 ){
        if( x1 > x2){
            cout << ">" << endl;
        }
        else if( x2 > x1 ){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }
    }
    else if(p1 > p2){
        if(count1 == count2){
            if(x1 > x2){
                cout << ">" << endl;
            }
            else if(x2 > x1){
                cout << "<" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
        cout << ">" << endl;
    }
    else{
        cout << "<" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}