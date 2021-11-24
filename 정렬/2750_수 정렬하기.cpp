#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    cin >> num;
    int arr[num];
    vector<int> v(num,-1);
    
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < num; i++){
        int idx = 0;
        for(int j = 0; j < num; j++){
            if(arr[i] != arr[j]){
                if(arr[i] > arr[j]){
                    idx++;
                }
            }
        }
        v[idx] = arr[i];
    }
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;

}
