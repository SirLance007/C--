#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <iomanip>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string st;
    cin >> st;
    unordered_map<int , int> freq;
    int count = 0;
    for(int i = 0; i < st.size() ; i++){
        freq[st[i]]++;
    }
    for(auto pair : freq){
        if(pair.second >= pair.first - 'A'+1){
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        solve();
        t--;
    }
}
