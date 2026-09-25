#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1]) continue;
        char c = 'a';
        for (int j = 0; j <= 26; j++)
        {
            if ('a' + j != s[i - 1] && 'a' + j != s[i + 1])
            {
                c = 'a' + j;
                break;
            }
        }
        s[i] = c;
    }
    cout << s;
    return 0;
}
