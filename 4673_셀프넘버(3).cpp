#include<iostream>
#define N = 10001; //1~10000까지 이므로
using namespace std;
bool SelfList[N];

int CheckSelfNum(int num){
    int result = num;
    while(1){
        if(num == 0){break;}
        result += num%10;
        num = num / 10;
        
    }
    return result;

}

int main(){
    
    for(int i = 1; i < N; i++){
        int idx = CheckSelfNum(i);
        if(idx <= N){
            SelfList[idx] = true;
    }
}
    

    for(int i = 1; i < N; i++){
        if(SelfList[i] == false){
            cout << i << endl;
        }
    }
    return 0;
}

