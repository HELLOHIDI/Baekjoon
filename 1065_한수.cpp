#include <iostream>
using namespace std;
int checkHanNum(int a){
    int num = 0; // 한수의 개수
    for(int i = 1; i < a+1; i++){
        if(i/100 == 0){ //만약의 두자리 수라면 무조건 한수
            num++;
        }else{// 세자리수를 넘어가면
        	int target = i;
        	if(target != 1000){ //1000은 제외한다
        		int arr[3]; 
	        for(int j = 0; j < 3; j++){ //각각의 자리수를 배열에 저장하고
	        	arr[j] = target%10;
	        	target = target/10;
	        }
	        
	        if(arr[1]-arr[0] == arr[2]-arr[1]){ //그것의 차이가 같다면(등차수열이면)
	                num++; //한수의 개수를 늘려준다
	    	    }	
	        }   
	    }
    }
    return num;
}
int main() {
	int a;
    cin >> a;
    int result = checkHanNum(a);
    cout << result << endl;
	return 0;
}
