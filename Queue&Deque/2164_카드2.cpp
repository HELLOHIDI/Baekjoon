#include <iostream>
using namespace std;

const int QueueSize = 1000000; //stacksize
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
  int pop(){
      if(front == rear){
          return -1;
      }else{
          front = (front+1)%QueueSize;
          //cout << queue[front] << endl;
          return  queue[front];
      }
  }
  void empty(){
    if(front == rear){
        cout << 1 << "\n";
    }else{
        cout << 0 << "\n";
    }
  }
  int size(){
      int cnt = (rear - front)%QueueSize;
      return cnt;
  }
  int printfront(){
      if(front == rear){
          return -1;
      }else{
		return queue[(front+1)%QueueSize];	
      }
  }
  int printrear(){
      if(front == rear){
          return -1;
      }else{
    	return queue[rear];	
      }
      
  }

};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Queue q1;
    int num;
    cin >> num;
    if(num == 1) {cout << 1 << endl; return 0;}
    for(int i = 1; i <= num; i++){
    	q1.push(i);
    }
    
    while(q1.size() >= 1){
    	q1.pop();
    	if(q1.size() == 1){
    		break;
    	}
    	q1.push(q1.printfront());
    	q1.pop();
    	
    }
    cout << q1.printfront() << endl;
}
    
