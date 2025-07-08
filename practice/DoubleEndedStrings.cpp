#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a , b;
    cin >> a >> b;
    unordered_set<string> mp1;
    int maxi = 0;

    // both are equal;
    if (a.length() == b.length()) {
        mp1.clear();
        for (int i = 0; i < b.size(); i++) {
            string str = "";
            for (int j = i; j < b.size(); j++) {
                str += b[j];
                mp1.insert(str);
            }
        }
        for (int i = 0; i < a.size(); i++) {
            string str2 = "";
            for (int j = i; j < a.size(); j++) {
                str2 += a[j];
                if (mp1.find(str2) != mp1.end()) {
                    maxi = max(maxi, int(str2.size()));  
                }
            }
        }
        int result = (int)a.size() + (int)b.size() - 2 * maxi;  
        cout << result << endl;
        return;
    }

    // a > b
    if (a.length() > b.length()) {
        mp1.clear();
        for (int i = 0; i < b.size(); i++) {
            string str = "";
            for (int j = i; j < b.size(); j++) {
                str += b[j];
                mp1.insert(str);
            }
        }
        for (int i = 0; i < a.size(); i++) {
            string str2 = "";
            for (int j = i; j < a.size(); j++) {
                str2 += a[j];
                if (mp1.find(str2) != mp1.end()) {
                    maxi = max(maxi, int(str2.size())); 
                }
            }
        }
        int result = (int)a.size() + (int)b.size() - 2 * maxi;  
        cout << result << endl;
        return;
    }

    // b > a
    if (a.length() < b.length()) {
        mp1.clear();
        for (int i = 0; i < a.size(); i++) {
            string str = "";
            for (int j = i; j < a.size(); j++) {
                str += a[j];
                mp1.insert(str);
            }
        }
        for (int i = 0; i < b.size(); i++) {
            string str2 = "";
            for (int j = i; j < b.size(); j++) {
                str2 += b[j];
                if (mp1.find(str2) != mp1.end()) {
                    maxi = max(maxi, int(str2.size())); 
                }
            }
        }
        int result = (int)a.size() + (int)b.size() - 2 * maxi;  
        cout << result << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}
