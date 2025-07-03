#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;
    int count1 = 1;
    int count2 = 1;
    int maxi1 = 1;
    int maxi2 = 1;
    unordered_map<int , int> mp1;
    unordered_map<int , int> mp2;
    vector<int> a , b;

    for(int i = 0;  i < n ; i++){
        int x; 
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        int y;
        cin >> y;
        b.push_back(y);
    }

    for(int i = 1 ; i < n ; i++){
        if(a[i] == a[i-1]){
            count1++;
        }
        else{
            mp1[a[i-1]] = max(mp1[a[i-1]], count1);
            count1 = 1;
        }
    }
    mp1[a[n-1]] = max(mp1[a[n-1]], count1); 

    for(int i = 1 ; i < n ; i++){
        if(b[i] == b[i-1]){
            count2++;
        }
        else{
            mp2[b[i-1]] = max(mp2[b[i-1]], count2);
            count2 = 1;
        }
    }
    mp2[b[n-1]] = max(mp2[b[n-1]], count2); 

    unordered_map<int , int> mp3;
    for(auto pair : mp1){
        mp3[pair.first] = mp1[pair.first] + mp2[pair.first]; 
    }
    for(auto pair : mp2){
        mp3[pair.first] = mp1[pair.first] + mp2[pair.first]; 
    }

    int op = 1;
    for(auto pair : mp3){
        op = max(pair.second , op);
    }
    cout << op << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
