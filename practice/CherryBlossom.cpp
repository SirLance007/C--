#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k;
    cin >> n >> k;
    vector<long long> a , b ;
    for(int i = 0;  i < n ; i++){
        long long x ;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0;  i < n ; i++){
        long long x ;
        cin >> x;
        b.push_back(x);
    }
    long long first = -1;
    for(int i = 0; i < n ; i++){
        if(b[i] != -1){
            if(first == -1){
                first = a[i]+b[i];
            }
            else if(a[i] + b[i] != first){
                cout << 0 << endl;
                return;
            }
        }
    }

    if(first != -1){
        for(int i = 0; i < n ; i++){
            if(a[i] > first || first - a[i] > k){
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }

    long long mini = *min_element(a.begin() , a.end());
    long long maxi = *max_element(a.begin() , a.end());
    cout << k - (maxi - mini) + 1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
