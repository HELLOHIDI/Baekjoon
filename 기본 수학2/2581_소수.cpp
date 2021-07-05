#include <iostream>
using namespace std;
int main(){
    int M, N;
    cin >> M >> N;
    int sum = 0;
    int min = N+1;
    for(int i = M; i <= N; i++){
        bool check = true;
        if(i == 1){
        	check = false;
        	continue;
        }
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                check = false;
                break;
            }
        }
        if(check == true){
            sum += i;
            if(min > i) {min = i;}
        }
    }

    if(sum == 0) {cout << -1 << endl;}
    else{cout << sum << endl << min << endl;}



    return 0;
}
