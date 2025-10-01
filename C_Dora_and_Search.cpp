// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// minimum segment hoga 4 elements ka
// apne ko 2 elements wo nikalne hai jha par ane ko maximum aur minimum pata hoo us segment ka
// 4 conditions ->
// 1 max and min dono first aur last mai na hoo array ke
// 2 dono last mai hai
// 3 ek last mai hai
// 4 ek last mai nhi hai

// 1 -> direct i-1 and last+1
// 2 -> apan maxi se phele
// 3 -> agar mini last mai hai toh uske baad wale mini ko dhundo

// Approach
// Apan ek variable ko first rakhege aur ek ko last mai
// uske baad apan dekhege ki un indexes ke beechmai jo elements lie karte hai usmai un se chota aur un se bada hai kya
// agar un se chota hai toh index ko aage nhi bhadana
// agar un se ek bada exist karta hai to index ko piche karo jab tak ye condition nhi mile
// 2 1 4 3
// abb remaing mai 2 se chota exist karta hai plus 3 se bada bhi exist karta hai eska mtlb dono ka min() se chota and dono ka maximum se bada exist karta hai
// abb agar chota ya bada nhi mila toh uski side se aage karege pointer ko
// remaing mai se sabse bada nikalne ke liye
// agar mini ke pointer ko aage bhada diya toh abb naya sabse chota element ++ ho jayega aur aise hi agar maximum ko aage kar diya toh naya maximum -- ho jayega

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        st.insert(x);
    }
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    int maxi = n;
    int mini = 1;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        // checking if this satisfy
        if (ans[start] != mini && ans[end] != maxi && ans[start] != maxi && ans[end] != mini)
        {
            cout << start + 1 << " " << end + 1 << endl;
            return;
        }
        // start agar mini ke barabar hai toh
        if (ans[start] == mini){
            start++;
            mini++;
        }
        // agar start maxi ke barabar hai toh
        if(ans[start] == maxi){
            start++;
            maxi--;
        }
        // agar end maxi ke barabar hai toh
        if(ans[end] == maxi){
            end--;
            maxi--;
        }
        // agar end mini ke barabar hai toh
        if(ans[end] == mini){
            end--;
            mini++;
        }
    }
    cout << -1 << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}