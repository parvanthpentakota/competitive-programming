#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n, h;
    cin >> n >> h;

    int current = h;
    int time = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(current >= x){
            current -= x;
        }
        else{
            time++;
            current = h - x;
        }
    }

    if(current < h){
        time++;
    }

    cout << time;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}