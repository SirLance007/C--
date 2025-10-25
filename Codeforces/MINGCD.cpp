#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        long long mini = arr[0];
        vector<long long> ans;
        for(int i=1; i<n; i++){
            if(arr[i]%mini==0){
                ans.push_back(arr[i]);
            }
        }
        long long gcd=0;
        if(ans.size()>0) gcd = ans[0];
        for(int i=1; i<ans.size(); i++){
            gcd=__gcd(gcd,ans[i]);
        }
        if(gcd==mini) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}