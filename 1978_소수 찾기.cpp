#include <iostream>
#include <string>
using namespace std;
int main(){
    int NumTestCases;
    int cnt = 0;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int num; bool check = true;
        cin >> num;
        if(num == 1){check = false;}
        for(int j = 2; j < num; j++){
            if(num%j == 0){
                //cout << num << endl;
                check = false;
                break;
            }
        }
        if(check == true){
            cnt++;
        }
        
    }
    cout << cnt << endl;
    return 0;
}