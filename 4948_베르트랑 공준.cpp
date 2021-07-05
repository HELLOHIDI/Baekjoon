#include <iostream>
#include <cmath>
using namespace std;
int *Eratosthenes(int a, int b){
    int *arr;
    arr = (int *)malloc(sizeof(int) * b); //배운점
    for(int i = 2; i <= b; i++){
        arr[i] = i;
    }
//개 중요한 배운점
    for(int i = 2; i <= sqrt(b); i++){
        if(arr[i] == 0) continue;
        for(int j = i*i; j <= b; j += i){
            arr[j] = 0;
        }
    }

    return arr;
}
int main(){
    int *arr = Eratosthenes(1,246912);
    int n;
    while(1){
        cin >> n;
        int cnt = 0;
        if(n == 0) return 0;
        for(int i = n+1; i <= 2*n; i++){
            if(arr[i] != 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }


    return 0;
}