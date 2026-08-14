#include<bits/stdc++.h>
using namespace std;

void solution(){
   int row = 0;
    int col = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;

            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int moves = abs(row - 2) + abs(col - 2);

    cout << moves;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}