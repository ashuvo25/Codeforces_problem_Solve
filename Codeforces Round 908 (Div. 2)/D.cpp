#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
vector<ll> minimizeLIS(vector<ll>& a, vector<ll>& b) {
    sort(b.rbegin(), b.rend());
    vector<int> c;
    for (int num : b) {
        auto it = find_if(a.begin(), a.end(), [num](int x) { return x < num; });
        a.insert(it, num);
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);   
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        vector<ll> c = minimizeLIS(a, b);     
        for (int ci : c) cout << ci << " ";
        cout << std::endl;
    }
    return 0;
}
