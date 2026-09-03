#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    bool hard = false;

    for (int i = 0; i < n; i++) {
        int opinion;
        cin >> opinion;

        if (opinion == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "HARD\n";
    }
    else {
        cout << "EASY\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}