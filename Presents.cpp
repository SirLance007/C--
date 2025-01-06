#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int count = 0;
        for(int j = 1; j < n; j++) {
            for(int m = j+1; m < n; m++){
                if(arr[j] == arr[m]){
                    count++;
                    arr[m] = -331418;
                }
            }
            cout << 
        }
        cout << count << endl;
    }
}
