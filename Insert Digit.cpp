#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        string num;
        cin >> num;
        int pos = n;
        for (int i = 0; i < n; i++) {
            if (num[i] < d + '0') {
                pos = i;
                break;
            }
        }
        if (pos == n){
            num += to_string(d);
        } else {
            num.insert(pos, to_string(d));
        }
        cout << num << endl;
    }
    return 0;
}

