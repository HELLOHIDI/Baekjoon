#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double pi = M_PI; //파이
    double r;
    cin >> r;
    long double Taxi = 2*r*r;
    long double Euclid = r*r*M_PI;
    cout << fixed; //소수점 고정
    cout.precision(6); //소수점 고정
    cout <<  Euclid << endl;
    cout <<  Taxi << endl; 
    
    return 0;
}