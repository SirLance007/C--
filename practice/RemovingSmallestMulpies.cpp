#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>
#include <cwctype>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <limits>
#include <utility>
using namespace std;


void solve(){
    long long n;
    cin >> n;

    long long ans = 0;
    long long factorial = 1;
    int initial = 0;

    while(n > 0){
        int val = n % 3;

        if(initial == 0){
            ans += 1LL * 3 * val;
        }
        else{
            ans += 1LL * val * (1LL * 9 + initial) * factorial;
        }

        n /= 3;

        if(initial >= 1){
            factorial *= 3;
        }
        else{
            factorial = 1;
        }
        // har ke baad esko increment karo 
        initial++;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
