#include<bits/stdc++.h>
using namespce std;

void solve(){
    int n;
    cin >> n;
    int mini = 0;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        int diff = abs(abs(num) - 0);
        mini = min(mini , diff)l
    }
    cout << mini << endl;
}

int main(){
    solve();
}