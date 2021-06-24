#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int num;    string s; 
    int result = 0;
    //may be used uninitialized in this function
    cin >> num;
    cin >> s;
    for(int i = 0; i < num; i++){
        result += s[i] - '0'; //
    }
    cout << result << endl;
    

    
    return 0;
}