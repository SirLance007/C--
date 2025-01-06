#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int j = 0; j< n ; j++){
            cin >> arr[j];
        }
        int count = 0;
        int sum = 0;
        for(int j = 0; j<n;j++){
            if(arr[j] >= k){
                sum += arr[j];
            }
            else{
                if(sum > 0 && arr[j] == 0){
                    sum--;
                    count++;
                }
                else{
                    continue;
                }
            }
        }
        cout << count << endl;
    }
}