#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> A(n), B(n);
    for (auto &&i : A) cin >> i;
    B = A;
    sort(A.begin(), A.end());
    if (A == B) cout << n << '\n';
    else cout << "1\n";
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
