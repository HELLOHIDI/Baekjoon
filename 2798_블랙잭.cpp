#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    int answer = 0;
    int blackjack;
    cin >> n >> m;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                blackjack = num[i] + num[j] + num[k];
                if(blackjack > answer && blackjack <= m){
                    answer = blackjack;
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}