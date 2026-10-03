#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n, h;
    cin >> n >> h;

    int current = 0;
    int seconds = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(current + x > h){
            seconds++;
            current = 0;
        }

        current += x;
    }

    if(current > 0){
        seconds++;
    }

    cout << seconds << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}