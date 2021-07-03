#include <iostream>
#include <cstring>
using namespace std;
char alpabet[26] = {'A','B','C','D','E','F','G','H','I',
                    'J','K','L','M','N','O','P','Q','R',
                    'S','T','U','V','W','X','Y','Z'};
int main(){
    int result[26] = {0,};
    int check = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
        for(int j = 0; j < 26; j++){
            if(s[i] == alpabet[j]){
                result[j]++;
            }
        }
    }
    int max = result[0]; //최빈값
    int maxidx = 0; //많이 나온 알파벳의 인덱스
    for(int i = 1; i < 26; i++){
        if(result[i] > max){
            max = result[i];
            maxidx = i;
        }
    }
    for(int j = 0; j < 26; j++){
        if(result[j] == max){
            check++;
            if(check >= 2){
                cout << '?' << endl;
                return 0;
            }
        }
    }
    cout << alpabet[maxidx] << endl;
    return 0;
}
