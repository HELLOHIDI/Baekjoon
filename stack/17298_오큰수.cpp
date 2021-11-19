#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    stack<int> s;
    vector<int> result(num,-1);
    
    for(int i = 0; i < num; i++){
        while(!s.empty()&& arr[s.top()] < arr[i]){
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    
    for(int i = 0; i < num; i++){
        cout << result[i] << " ";
    }
    
    return 0;
    
}
