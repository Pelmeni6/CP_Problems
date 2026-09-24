#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, m, ans = 0;
    cin >> n >> m;
    map<ll, ll> freq;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    for (int i = 0; i < n; i++) freq[A[i] % m]++;
    if (freq[0] > 0) ans++;
    for (int i = 1; i <= m / 2; i++)
    {
        if (i == m - i) {
            if (freq[i] > 0) {
                ans++;
                continue;
            }
        }
        if (freq[i] > 0 || freq[m - i] > 0)
        {
            if (abs(freq[i] - freq[m - i]) < 2) ans++;
            else ans += 1 + (abs(freq[i] - freq[m - i]) - 1);
        }
        
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
