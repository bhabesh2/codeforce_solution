#include <bits/stdc++.h>
using namespace std;

string check(string n) {
    int size = n.size();
    string word = "";
    if (size <= 10) {
        return n;
    } else {
        word += n[0] + to_string(size - 2) + n[size - 1];
    }
    return word;
}

int main() {
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        string words;
        cin >> words;
        cout << check(words) << endl;
    }
    return 0;
}
