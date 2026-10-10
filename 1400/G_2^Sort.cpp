#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, k, ans = 0, cnt = 0;
    cin >> n >> k;
    vector<ll> A(n), zero(n);
    for (auto &&i : A) cin >> i;
    for (int i = 1; i <= k; i++)
    {
        if (2 * A[i] <= A[i - 1]) cnt++, zero[i]++;
    }
    if (cnt == 0) ans++;
    for (int i = k + 1; i < n; i++)
    {
        if (zero[i - k]) cnt--;
        if (2 * A[i] <= A[i - 1]) cnt++, zero[i]++;
        if (cnt == 0) ans++;
    }
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
