#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        if(k > n) {
            cout << -1 << endl;
            continue;
        }
        
        if(k == n) {
            cout << 0 << endl;
            continue;
        }

        queue<pair<long long, int>> q; 
        set<long long> visited;
        
        q.push({n, 0});
        visited.insert(n);
        
        int answer = -1;
        
        while(!q.empty()) {
            long long curr = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            if(curr == k) {
                answer = steps;
                break;
            }
        
            long long left = curr / 2;
            long long right = (curr + 1) / 2;
            
            if(left >= k && visited.find(left) == visited.end()) {
                visited.insert(left);
                q.push({left, steps + 1});
            }
            
            if(right >= k && visited.find(right) == visited.end()) {
                visited.insert(right);
                q.push({right, steps + 1});
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}