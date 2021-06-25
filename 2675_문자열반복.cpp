#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int NumTestCases; //테스트케이스 개수
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int cnt; //출력반복횟수     
        string buffer; //출력문자열
        cin >> cnt >> buffer; 
        for(int i = 0; i < buffer.length(); i++){
            for(int j = 0; j < cnt; j++){
                cout << buffer[i];    
            }
        }
        cout << endl;

    }
}
