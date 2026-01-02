#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], freq[1000] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {
            cout << arr[i] << " -> " << freq[arr[i]] << endl;
            freq[arr[i]] = 0;
        }
    }

    return 0;
}
