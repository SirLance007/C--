#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string vowels = "aeiou";
    string ans  = "";
    int count = 0;
    for(int i = 0; i < n ;i ++){
        if(vowels[count] == 'u'){
            ans += vowels[count];
            count = 0;
        }
        else {
            ans += vowels[count];
            count++;
        }
    }
    sort(ans.begin(), ans.end()); 
    cout << ans << endl;                  
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
