#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> dp(4, vector<ll> (n + 1));
    vector<ll> A(n), B(n);
    for (auto &&i : A) cin >> i;
    for (auto &&i : B) cin >> i;
    for (int i = 0; i < n; i++)
    {
        dp[0][i + 1] = max({dp[0][i], dp[1][i], dp[2][i], dp[3][i]}) - A[i];
        dp[1][i + 1] = min({dp[0][i], dp[1][i], dp[2][i], dp[3][i]}) - A[i];
        dp[2][i + 1] = B[i] - min({dp[0][i], dp[1][i], dp[2][i], dp[3][i]});
        dp[3][i + 1] = B[i] - max({dp[0][i], dp[1][i], dp[2][i], dp[3][i]});
    }
    cout << max({dp[0][n], dp[1][n], dp[2][n], dp[3][n]}) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
