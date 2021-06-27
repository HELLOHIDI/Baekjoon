#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int cnt = 1; //단어의 개수
    getline(cin, s); //getline(cin, str) :공백이 포함된 문자열 입력
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            if(i == 0 || i == s.length()-1){
        		continue;
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}