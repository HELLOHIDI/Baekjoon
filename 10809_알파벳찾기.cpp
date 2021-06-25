#include <iostream>
#include <cstring>
using namespace std;
char alpabet[26] = {'a','b','c','d','e','f','g',
                    'h','i','j','k','l','m','n',
                    'o','p','q','r','s','t','u','v',
                    'w','x','y','z'};

int main(){
    string buffer;
    int check = 0;
    cin >> buffer;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < buffer.length(); j++){
            if(alpabet[i] == buffer[j]){
                cout << j << " ";
                check = 0;
                break;
            }else{
                check = 1;
            }
            
        }
        if(check == 1){
            cout << -1 << " ";
        }
    }
    return 0;
}