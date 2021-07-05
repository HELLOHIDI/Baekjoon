#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int target = N;
    if(N == 1){
        return 0;
    }else{
        for(int i = N/2; i >= 2; i--){
            if(target%i == 0){
            	cout << target/i << " ";
                target = i;
            }
        }
	}
	cout << target << endl;
	return 0;
}
