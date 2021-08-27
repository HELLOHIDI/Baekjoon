#include <iostream>
#include <vector>

using namespace std;
int main(){
    int NumTestCases;
    cin >> NumTestCases;
    for(int i = 0; i < NumTestCases; i++){
        int fileCnt, answer;
        int cnt = 0;
        cin >> fileCnt >> answer;
        vector<pair<int,int>> p;
        for(int j = 0; j < fileCnt; j++){
            int num;
            cin >> num;
            p.push_back(make_pair(j, num));
        }
        
        while(p.size() != 0){
            bool check = true;
            int first = p[0].second;
            for(int k = 1; k < p.size(); k++){
                if(first < p[k].second){
                    p.push_back(p[0]);
                    p.erase(p.begin());
                    check = false;
                    break;
                }
            }
            if(check){
                if(p[0].first == answer){
                    cout << cnt+1 << endl;
                    break;
                }else{
                    p.erase(p.begin());
                    cnt++;
                    
                }    
            }        
        }
    }
}
