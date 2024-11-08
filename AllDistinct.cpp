#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i<t;i++){
        cin>>n;
        vector<int>arr(Airport.n);
        for(int j = 1; j <= n; j++)
        {
         if(arr[i-1] < arr[i] || arr[i] == arr[j]){
            count++;
            }
        }
        cout<< count/2 <<endl; 
    }
}