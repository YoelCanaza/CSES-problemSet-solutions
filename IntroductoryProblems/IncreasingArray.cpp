// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(void) {
    int n; cin >> n;

    vector<int> numbers(n);

    for (int &numbers : numbers) cin >> numbers;
    int anterior = numbers[0];

    Long numMoves = 0;
    for (int number : numbers) {
        if (anterior > number) {
            numMoves += anterior - number;
        } else {
            anterior = number;
        }
        
    }

    cout << numMoves;
}