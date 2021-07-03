#include <iostream>
using namespace std;
int second[8] = {3,4,5,6,7,8,9,10};
int main(){
    string s;
    int time = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C'){
            time += second[0];
        }else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
            time += second[1];
        }else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I'){
            time += second[2];
        }else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L'){
            time += second[3];
        }else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O'){
            time += second[4];
        }else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S'){
            time += second[5];
        }else if(s[i] == 'V' || s[i] == 'U' || s[i] == 'T'){
            time += second[6];
        }else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z'){
            time += second[7];
        }
    }

    cout << time << endl;


    return 0;
}
