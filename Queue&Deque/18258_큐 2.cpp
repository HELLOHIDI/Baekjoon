#include <iostream>
using namespace std;

const int QueueSize = 2000000; //stacksize
class Queue{
private:
  int queue[QueueSize]; //stack
  int front, rear; //top
public:
  Queue(){
    front = 0;
    rear = 0;
  }
  void push(int val){
  	rear = (rear+1)%QueueSize;
    queue[rear] = val;

  }
  void pop(){
      if(front == rear){
          cout << -1 << "\n";
      }else{
          front = (front+1)%QueueSize;
          cout << queue[front] << "\n";
      }
  }
  void empty(){
    if(front == rear){
        cout << 1 << "\n";
    }else{
        cout << 0 << "\n";
    }
  }
  void size(){
      int cnt = (rear - front)%QueueSize;
      cout << cnt << "\n";
  }
  void printfront(){
      if(front == rear){
          cout << -1 << "\n";
      }else{
    	cout << queue[(front+1)%QueueSize] << "\n";	
      }
  }
  void printrear(){
      if(front == rear){
          cout << -1 << "\n";
      }else{
    	cout << queue[rear] << "\n";	
      }
      
  }

};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int NumTestCases;
    Queue q1;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int num;
            cin >> num;
            q1.push(num);
            
        }else if(s == "pop"){
            q1.pop();
        }else if(s == "size"){
            q1.size();
        }else if(s == "empty"){
            q1.empty();
        }
        else if(s == "front"){
            q1.printfront();
        }
        else{
            q1.printrear();
        }
    }
}
