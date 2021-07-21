#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int time = 0;
    cin >> n;
    int atm[n];
    for(int i = 0; i < n; i++){
        cin >> atm[i];
    }
    sort(atm, atm+n); //배열의 정렬 배열이름, 배열이름 + 배열의 크기
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            time+=atm[j];
        }
    }
    cout << time << endl;
    return 0;
}