#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '?') {
                if (i == 0) {
                    res *= 9;
                } else {
                    res *= 10;
                }
            }
            if(s[0]=='0') res=0;
        }
        cout << res << endl;
    }
    return 0;
}
