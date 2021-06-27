#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int NumTestCases;
    cin >> NumTestCases;
    string s; 
    int result = 0;
    for(int i = 0; i < NumTestCases; i++){
        cin >> s;
        bool check = true;
        for(int j = 0; j < s.length(); j++){
            for(int k = j+1; k < s.length(); k++){
                if(s[j] == s[k] && k-j > 1){ //값이 같고 연속된 수가 아닐때
                    for(int t = j+1; t < k; t++){ //사이에 연속이 되는지
                        if(s[t] != s[j]){
                            check = false;
                            break;
                        }
                    }    
                }
                if(check == false) break;
            }
            if(check == false) break;
        }
        if(check == true) result++;
    }
    cout << result << endl;
    return 0;
}