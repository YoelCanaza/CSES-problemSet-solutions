// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    int n; cin >> n;
    vector<int> numbers(n-1);

    for (int &num : numbers) cin >> num;

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < n-1; i++) {
        if (numbers[i] != i+1) {
            cout << i+1;
            return 0;
        } 
    }

    cout << n;
}