#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n,m;
        cin >> n >> m;
        int sum = 0; 
        int count = 0;
        for(int j = 0; j<n;j++){
            string s;
            cin >> s;
            int len = s.length();
            if(sum + len <= m){
                count ++;
                sum += len;
            }
            else{
                sum += len;
                continue;
            }
        }
        cout << count << endl;
    }
}