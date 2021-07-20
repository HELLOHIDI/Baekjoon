#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int weight[n]; int height[n]; int result[n] ={0,};
    for(int i = 0; i < n; i++){
        int w,h;
        cin >> w >> h;
        weight[i] = w;
        height[i] = h;
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(weight[i] > weight[j]){
                if(height[i] > height[j]){
                    result[j]++;
                }else{
                    continue;
                }
            }else if(weight[i] < weight[j]){
                if(height[i] < height[j]){
                    result[i]++;
                }else{
                    continue;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << result[i]+1<< " ";
    }
    cout << endl;
    return 0;
}