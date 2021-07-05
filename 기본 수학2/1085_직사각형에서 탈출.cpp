#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int a, b, c, d, result;
    int a = (x <= w- x) ? x : w- x;
    int b = (y <= h-y) ? y : h-y;
    int c = (sqrt(pow(w,2) + pow(h,2)) - sqrt(pow(x,2)+pow(y,2)) <= sqrt(pow(x,2)+pow(y,2))) ? sqrt(pow(w,2) + pow(h,2)) - sqrt(pow(x,2)+pow(y,2)) : sqrt(pow(x,2)+pow(y,2));
    int d = (sqrt(pow(x-w,2)+pow(y,2)) <= sqrt(pow(x,2)+pow(y-h,2))) ? sqrt(pow(x-w,2)+pow(y,2)) : sqrt(pow(x,2)+pow(y-h,2));
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    
    
    cout << *min_element(v.begin(), v.end()) << endl;
}
