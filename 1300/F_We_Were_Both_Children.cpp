#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = -1e18;
    cin >> n;
    vector<ll> A(n), B(n + 1);
    map<ll, ll> cnt;
    map<ll, bool> used;
    for (auto &&i : A)
    {
        cin >> i;
        cnt[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (used[A[i]]) continue;
        for (int j = A[i]; j <= n; j+= A[i]) B[j] += cnt[A[i]];
        used[A[i]] = true;
    }
    for (int i = 1; i <= n; i++) ans = max(ans, B[i]);
    cout << ans << '\n';
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