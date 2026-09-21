#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << s;
    if (s[s.size() - 1] == 'e')
    {
        cout << 'r';
    }else cout << "er";
    return 0;
}
