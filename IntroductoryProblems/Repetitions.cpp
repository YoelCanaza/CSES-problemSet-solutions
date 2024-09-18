// https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    string sn; cin >> sn;

    char charAnterior = sn[0]; 
    vector<int> maxLengths(1);
    maxLengths[0] = 1;
    int actualVector = 0;

    for (int i = 1; i < (int)sn.length(); i++) {
        if (sn[i] == charAnterior) {
            maxLengths[actualVector] += 1;
        } else {
            maxLengths.push_back(1);
            actualVector += 1;
        }
        charAnterior = sn[i];
    }

    auto maxL = max_element(maxLengths.begin(), maxLengths.end());
    cout << *maxL << endl;
}