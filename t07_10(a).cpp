#include <iostream>
#include <vector>

using namespace std;

int min(int n, vector<int>& a) {
    int min_value = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int transformed_value = (i + 1) * a[i];
        if (transformed_value < min_value) {
            min_value = transformed_value;
        }
    }

    return min_value;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = min(n, a);
    cout << result << endl;

    return 0;
}
