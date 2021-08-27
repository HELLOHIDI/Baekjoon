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
  bool empty(){
    if(front == rear){
        return true;
    }else{
        return false;
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
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		q1.push(i);
	}
	cout << "<";
	while(!q1.empty()){
		if(cnt == k-1){
			cout << q1.pop();
			cnt = 0;
			if(q1.empty()){
				cout << ">";
			}else{
			 cout << "," << " ";
			}
		}else{
			q1.push(q1.printfront());
			cnt++;
			q1.pop();

		}
	}
	return 0;

}
