#include <iostream>
using namespace std;

const int StackSize = 100000; //stacksize
class Stack{
private:
  char stack[StackSize]; //stack
  int top; //top
public:
  Stack(){
    top = -1;
  }
  int getTop(){
      return top;
  }
  void push(int val){
    stack[++top] = val;
  }
  int pop(){
    return stack[top--];
  }
  bool empty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
  }
  int size(){
      int cnt = 0;
      while(cnt <= top){
          cnt++;
      }
      return cnt;
  }
  int printtop(){
      if(top == -1){
          cout << -1 << endl;
          return 0;
      }
      cout << stack[top] << endl;
      return 0;
  }

};

int main(){
    int NumTestCases;
    cin >> NumTestCases;
    int cnt = 0;
    for(int i = 0; i < NumTestCases; i++){
        Stack s1;
        string s;
        int check = 1;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '('){s1.push('(');}
            else if(s[j] == ')'){
                if(s1.empty()){
                    cout << "NO" << endl;
                    check = 0;
                    break;
                }else{
                    if(s1.pop() != '('){
                        cout << "NO" << endl;
                        check = 0;
                        break;
                    }
                }
            }
        }
        if(check != 0){
            if(s1.empty()){cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }

    }
    return 0;
}
