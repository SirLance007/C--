#include<iostream>
using namespace std;

int main(){
    int t;
    string code = "codeforces";
    string s;
    for(int i = 0; i <t;i++){
        cin >> s;
        int count = 0;
        for(int j = 0; j < code.length(); j++){
            if(s[j] != code[j]){
                count++;
            }
        }
        cout << count << endl;
    }
}