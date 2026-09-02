#include<bits/stdc++.h>
using namespace std;

void solution() {
    int year;
    cin >> year;

    while (true) {
        year++;

        int d1 = year / 1000;
        int d2 = (year / 100) % 10;
        int d3 = (year / 10) % 10;
        int d4 = year % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 &&
            d2 != d3 && d2 != d4 &&
            d3 != d4) {
            cout << year << '\n';
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}