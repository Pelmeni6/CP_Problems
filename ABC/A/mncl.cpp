#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s[i] << 'o';
    }
    cout << s[s.size() - 1];
    return 0;
}
