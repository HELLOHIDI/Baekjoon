#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int NumTestCases;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int x1,y1,r1;
        int x2,y2,r2;
        int answer;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int distance = pow(x1-x2,2) + pow(y1-y2,2);
        
        if(x1 == x2 && y1 == y2 && r1 == r2){
            answer = -1;
            cout << answer << endl;
            continue;
        }
        if(pow(r1+r2,2) == distance || pow(r1-r2,2) == distance){
            answer = 1;
        }else if(pow(r1+r2,2) < distance || pow(r1-r2,2) > distance){
            answer = 0;
        }else if(pow(r1-r2,2) < distance && distance < pow(r1+r2,2)){
            answer = 2;
        }
        
        cout << answer << endl;
    }
}