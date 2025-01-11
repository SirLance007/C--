#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);
    unordered_set<int> set;
    vector<int> numbers;
    
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++){
        set.insert(arr[i]);
    }
    for(int i = 0; i < n * k; i++){
        numbers.push_back(i + 1);
    }
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
        int count = 1;
        for(int j = 0; j < numbers.size(); j++){
            if(set.find(numbers[j]) == set.end() && numbers[j] >= 0){
                cout << numbers[j] << " ";
                count++;
                numbers[j] = -1;
                if(count == n) break;
            }
        }
        
        cout << "\n";
    }
    
    return 0;
}
