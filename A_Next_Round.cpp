#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] > 0 && arr[j] >= arr[k -1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}


