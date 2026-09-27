#include<bits/stdc++.h>
using namespace std;

bool lucky(int n){
    while(n > 0){
        int digit = n % 10;

        if(digit != 4 && digit != 7){
            return false;
        }

        n /= 10;
    }

    return true;
}

void solution(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(lucky(i) && n % i == 0){
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}