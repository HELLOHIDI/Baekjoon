#include <iostream>
using namespace std;
int main(){
	int NumTestCases;
	cin >> NumTestCases;
	for(int i = 0; i < NumTestCases; i++){
		int H, W, idx;
    cin >> H >> W >> idx;
    int a = 100;
    int b = 1;
    while(1){
        if(H >= idx){
            break;
        }
        idx -= H;
        
        b++;
    }
    cout << idx*100 +  b << endl;
	}
    

    return 0;
}