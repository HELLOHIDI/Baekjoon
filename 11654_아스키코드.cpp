#include <iostream>
using namespace std;
int main(){
    char target;
    cin >> target;
    cout << (int)target << endl;
}
 //char 변수는 1바이트 정수다. 그러나 char 자료형이 정수일지라도 일반 정소와는 다른 방식으로
 //사용한다. 그래서 char 값을 정수로 해석하는 대신 아스키 코드 문자로 해석한다
