#include <iostream>
using namespace std;
int main(){
    int cnt;
    int denominator = 1;
    int numerator = 1;
    cin >> cnt;
    if(cnt == 1){
    	cout << numerator << '/' << denominator << endl;
    	return 0;
    }
    int group = 1;
    int sum = 0;
    while(cnt > sum){
        group++;
        sum = group*(group+1)/2;
    }
    
    if(group%2 == 0){
        denominator = 1 + (sum-cnt);
        numerator = group - (sum-cnt);
    }else{
        denominator = group - (sum-cnt);
        numerator = 1 + (sum-cnt);
    }
    
    cout << numerator << '/' << denominator << endl;
    
    

    return 0;
}


//배운점 : 군수열
//cnt == 1일때 이거 조건 추가 안하는 코드 찾아보기