#include <iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int realA = (a[2]-'0')*100 + (a[1]-'0')*10 + (a[0]-'0');
    int realB = (b[2]-'0')*100 + (b[1]-'0')*10 + (b[0]-'0');
    if(realA > realB){
        cout << realA << endl;
    }else{
        cout << realB << endl;
    }
   return 0;
}