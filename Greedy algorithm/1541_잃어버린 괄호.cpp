#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str;
    cin >> str;
    int result = 0;
    string temp = "";
    bool minus = false;
    for (int i = 0; i <= str.size(); i++){
    //연산자일 경우
     if (str[i] == '+' || str[i] == '-' || str[i] == '\0'){
         if (minus){
             result -= stoi(temp);
         }else{
              result += stoi(temp);
         }
         temp = ""; //초기화
         if (str[i] == '-'){ minus = true;}
         continue;
    
    }
    temp += str[i];
    }
    cout << result << endl;
}
