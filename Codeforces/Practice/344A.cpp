#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    string previous;
    cin >> previous;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        string current;
        cin >> current;

        if (current != previous) {
            groups++;
        }

        previous = current;
    }

    cout << groups << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}