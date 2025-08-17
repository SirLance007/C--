#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<long long> h(N);
    for (int i = 0; i < N; ++i)
        cin >> h[i];

    if (N == 1)
    {
        cout << 0 << "\n";
        return 0;
    }

    vector<long long> dp(N, LLONG_MAX);
    dp[0] = 0;
    dp[1] = abs(h[K] - h[1]);
    for (int i = 2; i < K; i++)
    {
        dp[i] = abs(h[K] - h[i]);
    }
    for (int i = K + 2; i < N; i++)
    {
        for (int j = 1; j < K; j++)
        {
            dp[i] = min(dp[i], llabs(h[j] - h[i - 1]));
        }
    }

    cout << dp[N - 1] << "\n";
    return 0;
}
