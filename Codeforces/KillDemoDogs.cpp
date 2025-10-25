#include<iostream>
#include<vector>
using namespace std;


void solve(){
    int n;
    cin >> n;

    // 0 0 0
    // 0 0 0
    // 0 0 0
    // n -> right -> (1 , 1) (1 , 2) , (2 , 3)
    // n-1 -> down -> (1 , 1) , (2 , 2) , ( 3 ,  3)

    // n = 4
    // 0 0 0 0
    // 0 0 0 0
    // 0 0 0 0
    // 0 0 0 0 
    // n -> right -> (0 , 1 ) , ( 1 , 2 ) , (2 , 3)
    // n -> down -> (1 , 1) , (2 , 2) , (3 , 3)
    long long int sum = 1;
    for(int i = 2; i <= n ; i++){
        sum += (i*(i-1));
    }
    for(int i = 2; i <= n ; i++){
        sum += (i*i);
    } 
    long long int ans = (sum*2022)%(1000000000+7);
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}