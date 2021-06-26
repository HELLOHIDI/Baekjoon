#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int NumTestCases; //테스트케이스 개수
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int cnt; // 반복할 횟수    
        string buffer; // 입력받을 문자열
        cin >> cnt >> buffer;
        for(int i = 0; i < buffer.length(); i++){ //문자열의 길이만큼
            for(int j = 0; j < cnt; j++){ //각 문자를 cnt만큼 출력한다
                cout << buffer[i];    
            }
        }
        cout << endl;

    }
}
