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
  void pop(){
      if(top == -1){
          cout << -1 << endl;
      }else{
          cout << stack[top--] << endl;
      }
  }
  void empty(){
    if(top == -1){
        cout << 1 << endl;
    }else{
        cout << 0 <<  endl;
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
    Stack s1;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int num;
            cin >> num;
            s1.push(num);
            
        }else if(s == "pop"){
            s1.pop();
        }else if(s == "size"){
            s1.size();
        }else if(s == "empty"){
            s1.empty();
        }
        else{
            s1.printtop();
        }
    }
}
