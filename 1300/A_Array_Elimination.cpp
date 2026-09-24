#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, mx = -1e18;
    cin >> n;
    set<ll> ans;
    vector<ll> cnt(31, 0), A(n);
    for (auto &&i : A){
        cin >> i;
        for (int j = 30; j >= 0 ; j--)
        {
            if (i & (1LL << j)) cnt[j]++;
        }
    }
    ll tar = cnt[0];
    for (auto &&i : cnt)
    {
        if (i > 0) tar = __gcd(tar, i), mx = max(mx, i);
    }
    if (mx == -1e18)
    {
        for (int i = 1; i <= n; i++) cout << i << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i * i <= tar; i++)
    {
        if (tar % i == 0) {ans.insert(i); ans.insert(tar / i);}
    }
    for (auto &&i : ans) cout << i << ' ';
    cout << '\n';
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
