#include <bits/stdc++.h>
using namespace std;

int main(){
    string sum;
    cin >> sum;

    vector<int> summands;
    for (int i = 0; i < sum.length(); i += 2) {
        summands.push_back(sum[i] - '0');
    }

    sort(summands.begin(), summands.end());

    cout << summands[0];
    for (int i = 1; i < summands.size(); i++) {
        cout << "+" << summands[i];
    }
    cout << endl;

    return 0;
}