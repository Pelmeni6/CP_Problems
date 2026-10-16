#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> A(n), B(n);
    vector<vector<ll>> dp(2, vector<ll> (n + 1));
    for (auto &&i : A) cin >> i;
    for (auto &&i : B) cin >> i;
    for (int i = 0; i < n; i++)
    {
        dp[0][i + 1] = max(dp[0][i], dp[1][i] + B[i]);
        dp[1][i + 1] = max(dp[1][i], dp[0][i] + A[i]);
    }
    cout << max(dp[0][n], dp[1][n]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
