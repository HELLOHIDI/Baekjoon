#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string a, b;
    vector<int> v;
    int num;
    string answer;
    cin >> a >> b;
    reverse(a.begin(),a.end()); //배운점
    reverse(b.begin(),b.end());

    //배운점
    int length = (a.length() == b.length()) ? a.length() : (a.length() > b.length()) ? b.length() : a.length();
    int check = (b.length() == a.length())  ? 0 : (a.length() == length) ? 2 : 1;
    for(int i = 0; i < length; i++) {
    num =  ((a[i]-'0')+(b[i]-'0'));
    v.push_back(num);
    }
    if(check == 1){
        for(int i = length; i < a.length(); i++){
            num = (a[i]-'0');
            v.push_back(num);
        }
    }else{
        for(int i = length; i < b.length(); i++){
        num = (b[i]-'0');
        v.push_back(num);
        }
    }
    for(int i = 0; i <v.size()-1; i++){
        if(v[i] >= 10){
            v[i+1]++;
            v[i] -= 10;
        }
        answer += to_string(v[i]);
    }
    reverse(answer.begin(),answer.end());
    string end = to_string(v[v.size()-1]);
   
    end += answer;
    cout << end << endl;
    return 0;
}