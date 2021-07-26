#include <iostream>
#include <cstring>
#include <vector>
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
  void push(char val){
    stack[++top] = val;
  }
  char pop(){
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
  void printtop(){
      if(top == -1){
          cout << -1 << endl;
          //return 0;
      }
      cout << stack[top] << endl;
      //return 0;
  }

};



int main(){
    vector<string> s;
    vector<char> c;
    string str;
    int start = 0;
    while (getline(cin,str))
	s.push_back(str);
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s[i].size(); j++){
            c.push_back(s[i][j]);
        }
    }
    for(int i = 0; i < c.size(); i++){
        if(c[i] == '.'){
            int check = 1;
            Stack s1;
            string sentence(c.begin()+start,c.begin()+i+1);
            //cout << sentence << endl;
            start = i+1;
            if(sentence.length() == 1){
                return 0;
            }
            for(int j = 0; j < sentence.length(); j++){
                if(sentence[j] == '(' || sentence[j] == '{' || sentence[j] == '['){
                    s1.push(sentence[j]);
                }else if(sentence[j] == ')' || sentence[j] == '}' || sentence[j] == ']'){
                    if(s1.empty()) {
                    	cout << "no" << endl;
                        check = 0;
                        break;
                    }else{
                    	char temp = s1.pop();
                        if((temp != '('&& sentence[j] == ')') || (temp != '{' &&sentence[j] == '}') || (temp != '[' && sentence[j] == ']')){
                             //cout << s1.pop() << " " << sentence[j] << endl;
                             cout << "no" << endl;
                             check = 0;
                             break;
                         }
                    }
                }

            }
            if(check != 0){
            	if(s1.empty()){cout << "yes" << endl;}
            	else{cout << "no" << endl;}
        	
            }
            	
    
            }
        }
        
    }
        
    
