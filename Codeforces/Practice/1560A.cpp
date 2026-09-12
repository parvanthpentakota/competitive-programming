#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        int count = 0;
        int number = 0;

        while(count < k){
            number++;

            if(number % 3 == 0 || number % 10 == 3){
                continue;
            }

            count++;
        }

        cout << number << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}