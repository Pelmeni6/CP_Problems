#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    string s, t;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i] && t[i] != '*')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
