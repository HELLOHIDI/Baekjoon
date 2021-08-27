#include <iostream>
using namespace std;
int main(){
    int min = 100000000000;
    int n,m;
    cin >> n >> m;
    string Wfirst[8]={
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"	};
    string Bfirst[8]={
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"};
    char result[n+1][m+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char temp;
            cin >> temp;
            result[i][j] = temp;
        }
    }

    for(int i = 0; i <= n-8; i++){
        for(int j = 0; j <= m-8; j++){
            int b = 0; int w = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(Bfirst[k][l] != result[k+i][l+j]){ b++;}
                    if(Wfirst[k][l] != result[k+i][l+j]){ w++;}
                }
            }
            if(w<min)	min=w;
			if(b<min)	min=b;
        }
    }
    cout << min << endl;
}