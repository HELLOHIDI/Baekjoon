#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int begin[n]; int end[n];
    vector<pair<int,int>> order;
    for(int i = 0; i < n; i++){
        cin >> begin[i] >> end[i];
    }
    for(int i = 0; i < n; i++){
        order.push_back(make_pair(end[i],begin[i]));
    }
    sort(order.begin(),order.end());
    int earliest = 0; int selected = 0;
    for(int i = 0; i < n; i++){
        int meetingBegin = order[i].second;
        int meetingEnd = order[i].first;
        if(earliest <= meetingBegin){
            earliest = meetingEnd;
            selected++;
        }
    }
    cout << selected << endl;
    return 0;
}