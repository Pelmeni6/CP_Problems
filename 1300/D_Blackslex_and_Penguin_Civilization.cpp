#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> ans = {0};
    for (int i = 1; i <= n; i++)
    {
        vector<ll> nxt;
        for (auto &&x : ans) nxt.push_back(x * 2 + 1);
        for (int j = 0; j < 1LL << (i - 1); j++) nxt.push_back(j * 2);
        ans = nxt;
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
