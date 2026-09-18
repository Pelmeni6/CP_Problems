#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] == s[j - 1]) s.erase(j - 1, 2);
        }
    }
    if (s.empty()) cout << "YES\n";
    else cout << "NO\n";
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
