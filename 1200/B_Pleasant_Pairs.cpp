#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = 0;
    cin >> n;
    vector<ll> A(n);
    map<ll, ll> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        nums[A[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (auto &&[Aj, j] : nums)
        {
            if (Aj * A[i] > 2 * n) break;
            if (Aj * A[i] == i + j + 1 && j != i + 1) ans++;
        }
    }
    cout << ans / 2 << '\n';
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
