#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    vector<ll> A(n), ans;
    for (auto &&i : A) cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1) ans.push_back(A[i]);
        else if (A[i] > A[i + 1] && A[i] > A[i - 1] || A[i] < A[i + 1] && A[i] < A[i - 1]){
            ans.push_back(A[i]);
        }
    }
    cout << ans.size() << '\n';
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
