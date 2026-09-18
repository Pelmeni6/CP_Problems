#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, mn = 1e18, s;
    cin >> n;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    sort(A.begin(), A.end());
    if (n <= 2)
    {
        cout << A[0] << ' ' << A[1] << '\n';
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (abs(A[i] - A[i - 1]) < mn) mn = abs(A[i] - A[i - 1]), s = i;
    }
    for (int i = s; i < n; i++) cout << A[i] << ' ';
    for (int i = 0; i < s; i++) cout << A[i] << ' ';
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
