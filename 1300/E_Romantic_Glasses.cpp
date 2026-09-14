#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> A(n), pref(n + 1);
    map<ll, ll> freq; 
    for (auto &&i : A) cin >> i;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) pref[i] = pref[i - 1] - A[i - 1];
        else pref[i] = pref[i - 1] + A[i - 1];
    }
    for (int i = 0; i <= n; i++)
    {
        if (freq[pref[i]])
        {
            cout << "YES\n";
            return;
        }
        freq[pref[i]]++;
    }
    cout << "NO\n";
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
