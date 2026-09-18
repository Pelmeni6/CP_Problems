#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, mx = -1e18;
    cin >> n;
    map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        freq[x]++;
    }
    cout << freq[mx] << '\n';
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
