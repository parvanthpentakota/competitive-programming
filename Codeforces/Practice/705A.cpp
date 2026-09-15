#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            cout << "I hate";
        }
        else{
            cout << "I love";
        }

        if(i != n){
            cout << " that ";
        }
    }

    cout << " it\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}