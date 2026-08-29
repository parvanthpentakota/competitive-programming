#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;

        if (height <= h) {
            width += 1;
        }
        else {
            width += 2;
        }
    }

    cout << width << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}