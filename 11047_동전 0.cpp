#include <iostream>
using namespace std;
int main(){
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    int coin[n];
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }
    for(int j = n-1; j >= 0; j--){
        if(coin[j] <= k){
            while(coin[j] <= k){
                k -= coin[j];
                cnt++;
            }
        }
        if(k == 0) { break;}
    }
    cout << cnt << endl;
    return 0;
}