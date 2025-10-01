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
#include <cmath>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observation
// ek set hai usmai kuh
// kul milake we need to find how many unique sets we can made
// toh ek set mai sare unique elements daal do
// uske baad bacche hue mai se ek ek aur wapis unique bana do
// aur ye process repeat karte rahe
// so make a array of unique elements frequency
// subarray mai diffrence 1 se jada ka nhi hona chaiye
// so maximum sets would be n -> number of unique elements
// now we need to minimise them by pairing
// 2 2 2 2
// 2 0 0 0
// 1 1 2 2
// 1 0 1 0
// freq 2 1 2 3 1
// 5 15 6 14 8 12 9 11
// 1 1 1 1 1 1 1 1
// apan ek unique naam ka array banayege
// we will osrt it
// and uske baar we will get the required frequency
// now we will traverse jaha par bhi break ayay mena ek ka distance nhi aya vha par dip hai eska mtlb apan naya set banaygee
// toh vha tak cnt += dip wali values

// Approach
// Make a map store the frequency
// Chud gaye guru esko O(N long(n)) mai kanra padega jada se jada

// Test case
// 5 15 6 14 8 12 9 11
// 1 1 2 2 3 3 4 4
// 2 2 3 4 4
// 4 14 5 15 6 16 7 17
// 4 5 6 7 -> 1
// 14 15 16 17 -> 1

// 5 15 6 14 8 12 9 11
// 5 6 8 9 11 12 14 15
// 1 1 -> 1
// 1 1 -> 1
// 11 12 -> 1
// 14 15 -> 1

// to amke a set with 1

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    unordered_map<int, int> mp;
    unordered_set<int> unique;
    vector<int> uni;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        mp[x]++;
        if (unique.find(x) == unique.end())
        {
            uni.push_back(x);
            unique.insert(x);
        }
    }

    // unique values sorted
    sort(uni.begin(), uni.end());

    int cnt = mp[uni[0]];
    int last = mp[uni[0]];
    int lasVal = uni[0];

    for (int i = 1; i < uni.size(); i++)
    {
        int val = uni[i];
        int curr = mp[val];

        if (val - lasVal != 1)
        {

            cnt += curr;
            last = curr;
        }
        else
        {
            if (curr > last)
            {
                cnt += curr - last;
                last = curr;
            }
            else
            {
                last = curr;
            }
        }
        lasVal = val;
    }

    cout << cnt << endl;
}

// void solve(){
//     int n;
//     cin >> n ;
//     vector<int> ans;
//     map<int , int> mp;
//     vector<int> sortie;
//     unordered_set<int> st;
//     for(int i = 0; i < n ; i++){
//         int x;
//         cin >> x;
//         ans.push_back(x);
//         mp[x]++;
//         if(st.find(x) == st.end()){
//             sortie.push_back(x);
//             st.insert(x);
//         }
//     }
//     sort(sortie.begin() , sortie.end());
//     // idx will traverse on sortie array
//     int idx = 0;
//     // total sets we can make
//     int total = 0;
//     // n
//     while(idx < sortie.size()){
//         // idx value in sortie array
//         int first = sortie[idx];
//         int val = first;
//         // agar vo set mai exist hi nhi karta eska mtlb vp use ho chuka hai usko hatao
//         if(mp.find(val) == mp.end()){
//             idx++;
//             continue;
//         }
//         // jab tak apne ko iske next wale elements milte jaa rahe hai apan unko lege

//         // can be n
//         while(mp.find(val) != mp.end()){
//             // uski freq kam kardo kyuki vo apan ne le liya hai
//             mp[val]--;
//             // agar freq 0 hui toh erase kardo
//             if(mp[val] == 0){
//                 mp.erase(val);
//             }
//             val++;
//         }
//         // agar jo value choose kari thi vo khatam ho gayi toh usko aage bhadao idx ko jo sotie pe traverse karega
//         if(mp[first] == 0){
//             mp.erase(first);
//             idx++;
//         }
//         total++;
//     }
//     cout << total << endl;
// }

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}