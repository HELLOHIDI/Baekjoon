#include <iostream>
using namespace std;

const int StackSize = 100000; //stacksize
class Stack{
private:
  int stack[StackSize]; //stack
  int top; //top
public:
  Stack(){
    top = -1;
  }
  void push(int val){
    stack[++top] = val;
  }
  int pop(){
      if(top != -1){
          return stack[top--];
  }
  }
  bool empty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
  }
  void size(){
      int cnt = 0;
      while(cnt <= top){
          cnt++;
      }
      cout << cnt << endl;
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
    Stack s1;
    int cnt = 0;
    for(int i = 0; i < NumTestCases; i++){
        int num;
        cin >> num;
        if(num == 0 ){cnt -= s1.pop();}
        else{
            cnt += num;
            s1.push(num);
        }
        
    }
    cout << cnt << endl;
    return 0;
}