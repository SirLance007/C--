#include <bits/stdc++.h>
using namespace std;

void solve() {
    string st;
    cin >> st;
    string stHour = st.substr(0, 2); 
    string minutes = st.substr(3, 4); 

    int hour = stoi(stHour);

    if (hour >= 0 && hour <= 11) {
        cout << (hour < 10 ? "0" : "") << hour << ":" << minutes << " AM" << endl;
    } else if (hour >= 12 && hour <= 23) {
        cout << (hour - 12 == 0 ? 12 : (hour - 12 < 10 ? "0" : "") + to_string(hour - 12)) << ":" << minutes << " PM" << endl;
    } else if (hour == 24) {
        cout << "00" << ":" << minutes << " AM" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
