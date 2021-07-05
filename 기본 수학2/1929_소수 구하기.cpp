#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int M, N;
    cin >> M >> N;
    int arr[N-M+1] = {0,}; 
    int CheckList[N-M+1] = {0, }; // 배운점
    for(int i = 0; i < N-M+1; i++){
        arr[i] = M+i;
    }
    for(int j = 2; j <= sqrt(N); j++){ //배운점
        for(int i = 0; i < N-M+1; i++){
            if(CheckList[i] == 0){
                if(arr[i]%j == 0 && arr[i] != j){
                    CheckList[i] = 1;
                    
                }
            }
        }
    }

    for(int k = 0; k < N-M+1; k++){
        if(CheckList[k] == 0 && arr[k] != 1){
            cout << arr[k] << '\n'; //배운점
        }
    }
    return 0;
}
