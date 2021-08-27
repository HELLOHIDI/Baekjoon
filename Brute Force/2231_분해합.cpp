#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int answer = 1;
    while(answer < n){
        int answer2 = answer;
        int target = answer;
        while(target > 0){
            answer += target%10;
            target /= 10;
        }
        cout << answer << " ";
        if(answer == n){
            cout << answer2 << endl;
            break;
        }
        else{
            answer = answer2;
            answer++;
            cout << answer << endl;
        }
    }
    
}