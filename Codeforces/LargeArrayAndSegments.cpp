#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> a(n);
    for(long long i=0; i<n; i++) cin>>a[i];
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    if(x>sumA*k){
        cout<<0<<endl;
        return;
    }
    long long ans = x/sumA;
    long long find = x%sumA;
    if(find==0){
        ans--;
        find=sumA;
    }
    ans*=n;
    long long index=0;
    for(long long i=n-1; i>=0; i--){
        index+=a[i];
        if(index>=find)
            break;
        ans++;
    }
    cout<<n*k-ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}