#include <iostream>
using namespace std;
int main(){
    long long price = 0;
    long long cityCnt; cin >> cityCnt;
    long long distance[cityCnt-1];
    for(int i = 0; i < cityCnt-1; i++){
        cin >> distance[i];
    }
    long long oilPrice[cityCnt];
    for(int i = 0; i < cityCnt; i++){
        cin >> oilPrice[i];
    }
    long long cnt = 0; long long minPrice = oilPrice[0];
    price += minPrice*distance[cnt];

    for(int i = 1; i < cityCnt-1; i++){
        if(minPrice > oilPrice[i]){
            minPrice = oilPrice[i];
        }
        cnt++;
        price += minPrice * distance[cnt];
        if(cnt == cityCnt - 2){
            break;
        }
    }
    cout << price << endl;
    return 0;
}
