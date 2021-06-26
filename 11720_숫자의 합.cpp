#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int num;    string s; 
    int result = 0;
    cin >> num;
    cin >> s;
    for(int i = 0; i < num; i++){
        /*
        숫자 char은 아스키코드 48부터 시작하므로, 48을 빼주면 숫자를 얻을 수 있다
        그치만 '0'이 더욱 직관적이다 '0'의 아스키코드 값이 48이다.
        ex)
        char ch = '5';
        ch = ch - '0' => 실제로는 (int)53 - (int)48 = 5;
        */
        result += s[i] - '0'; 

    }
    cout << result << endl;
    

    
    return 0;
}
