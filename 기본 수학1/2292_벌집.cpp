#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(num == 1){
        cout << 1 << endl;
        return 0;
    }
    int cnt = 0;
    int block = 0;
    while(cnt < num){
        block++;
        cnt = 1 + ((6+6*block)*block)/2;
    }
    cout << block+1 << endl;
    return 0;
}

//velog 코딩리뷰 하면서 반복문 다시 한번 확인하기
// 등차수열, 바퀴수만 고려하면됨
