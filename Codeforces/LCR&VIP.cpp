#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve2(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    int j = 2;
    int flag = 0;
    for(int i = 0; i < n ; i++){
        if(ans[i]%i == 0 ){
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < n ; i++){
        if(ans[i]%2 == 0){
            cout << 2 << " ";
        }
        else{
            cout << 1 << " ";
        }
        cout << endl;
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans1.push_back(num);
    }
    ans1 = ans2;
    sort(ans1.begin() , ans1.end());
    int first = ans[0];
    int second = 0;
    for(int i = 0; i < n ; i++){
        if(ans[i] != first){
            second = ans[i];
            break;
        }
    }
    if(first == second || second == 0){
        cout << "NO" << endl;
        return;
    }
    else{
        for(int i = 0; i < n ; i++){
            if(ans2[i] == first){
                cout << 1 << " ";
            }
            else{
                cout << 2 << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--  > 0){
        solve();
    }
}