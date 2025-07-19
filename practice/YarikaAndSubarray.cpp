#include <bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Tarun cout.tie(NULL);

using ll = long long;
const ll mod = 1e9 + 7;
const int maxN = 1e6;


ll maxsumarray(vector<ll>& a, int l , int r){
    ll maxsum=INT_MIN, maxend=0;
    for(int i=l;i<=r;i++){
        maxend=maxend+a[i];
    
        if(maxsum<maxend){
            maxsum=maxend;
        }
        if(maxend<0){
            maxend=0;
        }
    }

    return maxsum;
}


void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int prevind=0;
    ll result=INT_MIN;

    for(int i=1;i<n;i++){
        if((abs(a[i])%2) == (abs(a[i-1])%2)){
            result=max(result,maxsumarray(a,prevind,i-1));
            prevind=i;
        }
    }
    result=max(result,maxsumarray(a,prevind,n-1));

    cout<<result<<"\n";
}




int main(){
	Code By Tarun

	ll test;
    cin>>test;
    while(test--){
        solve();
    }
    
}



