#include <iostream>
using namespace std;
int main(){
    int NumTestCases;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        long long x, y;
        cin >> x >> y;
        long long cnt = 0;
        long long k = 1; // 속도
        long long position = x; //현재위치
        long long distance; // 남은거리

        while(position != y){
            position += k;
            cnt++; 
            //cout << position << " ";
            if(y-position >= (k+2)*(k+1)/2){
                k = k+1;
            }else if(y-position >= (k+1)*(k)/2){
                k = k;
            }else{
                k = k-1;
            }
        }
        cout << cnt << '\n';
    }
}