#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = 0;

    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum % 7 == 0) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
