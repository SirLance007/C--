#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans(2*n);
    vector<vector<int>> arr;
    unordered_set<int> visited;
    vector<int> result;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n ; j++){
            int num;
            cin >> num;
            if(visited.find(i+j) == visited.end()){
                ans[i+j] = num;
                visited.insert(i+j);
                result.push_back(num);
            }
        }
    }
    sort(result.begin(),result.end());
    int j = 1;
    for(int i = 0; i < result.size() ; i++){
        if(result[i] != i+1){
            ans[0] = i+1;
            break;
        }
    }
    for(int i = 0; i < 2*n ; i++){
        cout << ans[i] << " " ;
    }
    cout << endl;
}

int main(){

}