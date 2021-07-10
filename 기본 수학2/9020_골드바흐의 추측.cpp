#include <iostream>
#include <cmath>
using namespace std;
int* Erathosteness(int a, int b){
    int* arr;
    arr = new int[b+1];
    /*보통 문자열 저장할 때 딱 문자열 길이만큼 메모리를 할당하거나 해서 (문자열 길이 + 1 바이트 만큼 할당
해야죠 ASCIIZ 문자열이니까요) 할당된 메모리를 넘겨서 쓰는 경우가 종종 있는데 그런 경우가 아닌지
재확인 해보시기 바랍니다 */

//arr = new int[b]; => error in ./a.out' free() invalid next size (fast)
    for(int i = 2; i <= b; i++){
        arr[i] = i;
    }
    for(int i = 2; i <= sqrt(b); i++){
        if(arr[i] == 0){
            continue;
        }
        for(int j = i*i; j <= b; j += i){
            arr[j] = 0;
        }
    }
    return arr;
}

bool check(int n){
    for(int j = 2; j <= sqrt(n); j++){
        if(n%j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int NumTestCases;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
    int num;
    cin >> num;
    int *arr = Erathosteness(1,num/2);
    for(int i = num/2; i >= 2; i--){
        if(arr[i] != 0){
            if(check(num-arr[i])){
                cout << arr[i] << " " << num-arr[i] << endl;
                break;
                }
            }
        }
    }
    return 0;
}