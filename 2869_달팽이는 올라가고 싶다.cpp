#include <iostream>
using namespace std;

int main() {
	long long a, b, v;
	cin >> a >> b >> v;
	long double realday = 0;
	long long day = 0;
	realday = (long double)(v-a)/(a-b) + 1;
	day = (v-a)/(a-b) + 1;
	if(realday == day){
		cout << day << endl;
	}else{
		cout << day+1 << endl;
	}
	
	
	return 0;
}

//배운점 : 시간 짧으면 왠만하면 반복문 쓰지 말기 , long double