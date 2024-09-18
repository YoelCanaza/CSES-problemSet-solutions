// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

void weirdAlgorithm(Long n) {
    while (n != 1) {
        cout << n << " ";
        if (n%2 == 0) n /= 2;
        else n = n*3 + 1;
    }
    cout << n;
}

int main(void) {
    Long n; cin >> n;

    weirdAlgorithm(n);
}
