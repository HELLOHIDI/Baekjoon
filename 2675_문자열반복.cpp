#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int NumTestCases;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int cnt;    string buffer;
        cin >> cnt >> buffer;
        for(int i = 0; i < buffer.length(); i++){
            for(int j = 0; j < cnt; j++){
                cout << buffer[i];    
            }
        }
        cout << endl;

    }
}