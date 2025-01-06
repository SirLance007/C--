#include<iostream>
#include<vector>
#include<algorithm>  // Include algorithm for the sort function
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t ; i++) { 
        int n;
        cin >> n;
        vector<long> arr(n);
        vector<long> ans;
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        if(n == 1){
            return arr[0];
        }
        if (n == 2) {
            cout << arr[1] - arr[0] << endl;
            continue;  // Skip the rest of the loop if n is 2
        }
        for(int j = 0; j < n-1; j++) {
            ans.push_back(arr[j]);
        }
        sort(ans.begin(), ans.end());  // Correct sort function
        int sum = 0;
        int last = ans[ans.size()-1];
        for(int j = 0; j < ans.size()-1; j++) {
            sum += last - ans[j];
            last = last - ans[j];
        }
        int result = arr[n-1] - last;
        cout << result << endl;
    }
    return 0;
}
