#include<iostream>
#include<string>
using ll=long long;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int arr[26]={0};
        int sum=0;
        int k=0;
        for(int i=0;i<n;++i){
            if(arr[str[i]-'a']==0){
                k++;
                sum+=k;
                arr[str[i]-'a']++;
            }
            else{
                sum+=k;
            }
        }
        cout<<sum<<endl;
    }
}