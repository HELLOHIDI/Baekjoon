#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    while(1){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) {return 0;}
        vector<int> v;
        v.push_back(pow(a,2));
        v.push_back(pow(b,2));
        v.push_back(pow(c,2));
        sort(v.begin(),v.end()); //오름차순 정렬
        if(v[0]+v[1] == v[2]){cout<< "right" << endl;}
        else {cout << "wrong" << endl;} 

    }

    

    return 0;
}