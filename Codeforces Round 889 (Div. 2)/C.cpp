#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> make_non_decreasing(int n, vector<int>& arr) {
    vector<pair<int, int>> operations;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0)
            continue;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] >= 0) {
                arr[i] += arr[j];
                operations.push_back({i + 1, j + 1});
                break;
            }
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Get the operations to make the array non-decreasing
        vector<pair<int, int>> operations = make_non_decreasing(n, arr);

        // Output
        cout << operations.size() << "\n";
        for (const auto& op : operations) {
            cout << op.first << " " << op.second << "\n";
        }
    }

    return 0;
}
