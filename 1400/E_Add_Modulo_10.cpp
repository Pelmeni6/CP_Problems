#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, two = 0, twe = 0, five = 0, mn = 1e18, mx = 0;
    cin >> n;
    vector<ll> A(n);
    for (auto &&i : A) {
        cin >> i;
        if (i % 5 == 0) five++, i += i % 10;
        mn = min(mn, i), mx = max(mx, i);
    }
    if (five != 0 && mn == mx)
    {
        cout << "Yes\n";
        return;
    }else if(five > 0){cout << "No\n"; return;}
    for (int i = 0; i < n; i++)
    {
        while (A[i] % 10 != 2) A[i] += (A[i] % 10);
        if (A[i] % 20 == 12) twe++;
        else two++;
    }
    if (min(two, twe) != 0) cout << "No\n";
    else cout << "Yes\n";
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
