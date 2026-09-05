#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = 0;

    while (true) {
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            break;
        }

        for (int i = 0; i < n; i++) {
            a[i] /= 2;
        }

        answer++;
    }

    cout << answer << '\n';

    return 0;
}