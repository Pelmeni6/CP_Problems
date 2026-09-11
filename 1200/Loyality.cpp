#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, x, ans = 0;
    cin >> n >> x;
    vector<ll> A(n), list;
    for (auto &&i : A) cin >> i;
    sort(A.begin(), A.end());
    ll l = 0, r = n - 1, s = 0;
    while (r >= l)
    {
        if ((s + A[r]) / x > s / x)
        {
            ans += A[r], s += A[r];
            list.push_back(A[r]);
            r--;
        }
        else {
            s+= A[l];
            list.push_back(A[l]);
            l++;
        }
    }
    cout << ans << '\n';
    for (auto &&i : list) cout << i << ' ';
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
