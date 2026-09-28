#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, k;
    cin >> n;
    vector<set<ll>> q(n);
    map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        while (k--)
        {
            ll x;
            cin >> x;
            freq[x]++;
            q[i].insert(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll tot = 1e18;
        for (auto &&x : q[i]) tot = min(tot, freq[x]); 
        if (tot > 1)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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
