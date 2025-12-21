#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class CartesianTree {
    vector<long long> vals;
    vector<int> left_child, right_child, parent;
    int m;

    // int total = 0;
    
public:
    CartesianTree(const vector<long long>& v) : vals(v), m(v.size()) {
        if (m <= 1) return;
        
        left_child.assign(m, -1);
        right_child.assign(m, -1);
        parent.assign(m, -1);
        // build the tree first 
        buildTree();
    }
    
    void buildTree() {
        stack<int> stk;
        
        for (int i = 0; i < m; ++i) {
            int last_popped = -1;
            
            // Pop elements smaller than current
            while (!stk.empty() && vals[stk.top()] <= vals[i]) {
                last_popped = stk.top();
                stk.pop();
            }
            
            // Set relationships
            left_child[i] = last_popped;
            
            if (!stk.empty()) {
                right_child[stk.top()] = i;
            }
            
            stk.push(i);
        }
        
        // Build parent array
        for (int i = 0; i < m; ++i) {
            if (left_child[i] != -1) 
                parent[left_child[i]] = i;
            if (right_child[i] != -1) 
                parent[right_child[i]] = i;
        }
    }
    
    long long computeCost() {
        if (m <= 1) return 0;
        
        long long cost = 0;
        for (int i = 0; i < m; ++i) {
            if (parent[i] != -1) {
                cost += vals[parent[i]];
            }
        }
        return cost;
    }
};

class Solver {
    int n;
    vector<long long> a;
    long long max_val;
    vector<int> max_positions;
    
public:
    void readInput() {
        cin >> n;
        a.resize(n);
        for (auto& x : a) cin >> x;
        
        max_val = *max_element(a.begin(), a.end());
        
        for (int i = 0; i < n; ++i) {
            if (a[i] == max_val) {
                max_positions.push_back(i);
            }
        }
    }
    
    vector<long long> getSegment(int start, int end) {
        vector<long long> segment;
        
        if (start > end) {
            // Wrap around case
            for (int i = start; i < n; ++i) {
                segment.push_back(a[i]);
            }
            for (int i = 0; i <= end; ++i) {
                segment.push_back(a[i]);
            }
        } else {
            for (int i = start; i <= end; ++i) {
                segment.push_back(a[i]);
            }
        }
        
        return segment;
    }
    
    long long solve() {
        int k = max_positions.size();
        long long total_cost = 0;
        int segments_processed = 0;
        
        for (int i = 0; i < k; ++i) {
            int next = (i + 1) % k;
            
            int start = max_positions[i] + 1;
            int end = max_positions[next] - 1;
            
            // Handle wrap around
            if (next == 0) {
                end = max_positions[next] + n - 1;
            }
            
            if ((next > i && start > end) || 
                (next < i && start > max_positions[next] + n - 1)) {
                continue;
            }
            
            vector<long long> segment = getSegment(start, end % n);
            
            if (segment.empty()) continue;
            
            segments_processed++;
            CartesianTree tree(segment);
            total_cost += tree.computeCost();
        }
        
        return total_cost + max_val * (segments_processed + k - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        Solver solver;
        solver.readInput();
        cout << solver.solve() << '\n';
    }
    
    return 0;
}