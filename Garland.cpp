#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_set<char> colors(s.begin(), s.end());
        if (colors.size() < 4) {
            cout << "-1\n";
            continue;
        }
        int c = 0, last_color = -1;
        bool bulbs[4] = {false};
        for (char i : s) {
            if (i != last_color) {
                bulbs[i - '0'] = !bulbs[i - '0'];
                c++;
                last_color = i;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
