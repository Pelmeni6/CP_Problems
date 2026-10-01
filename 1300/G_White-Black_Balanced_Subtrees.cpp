#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = 0;
    string s;
    cin >> n;
    vector<ll> A(n + 1), black(n + 1), white(n + 1);
    for (int i = 2; i <= n; i++) cin >> A[i];
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W') white[i + 1]++;
        else black[i + 1]++;
    }
    for (int i = n; i > 1; i--) black[A[i]] += black[i], white[A[i]] += white[i];
    for (int i = 1; i <= n; i++)
    {
        if (white[i] == black[i]) ans++;
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
