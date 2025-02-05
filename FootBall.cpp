#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin >> st;
    int count = 0;
    int flag = 0;
    int maxi = 0;
    for(int i = 1; i< st.length(); i++){
        if(st[i] == st[i-1]){
            count++;
            maxi = max(count , maxi);
        }
        else{
            count = 0;
        }
    }
    if(maxi < 6){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}