#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int ans = s1.compare(s2);

    if (ans < 0)
    {
        cout << "-1" << endl;
    }
    else if (ans > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}