#include <iostream>
#include <cstring>
using namespace std;
char alpabet[26] = {'a','b','c','d','e','f','g',
                    'h','i','j','k','l','m','n',
                    'o','p','q','r','s','t','u','v',
                    'w','x','y','z'};
//알파벳을 담은 배열

int main(){
    string buffer; //문자열
    int check = 0; //buffer 문자열 내에 알파벳이 있는지 확인시켜주는 변수
    cin >> buffer;
    for(int i = 0; i < 26; i++){ //알파벳 첨부터 끝까지 (a~z)
        for(int j = 0; j < buffer.length(); j++){ //각 단어를 돌면서
          /*
          a->b->c
          b->a->e->k->j->o->o->n
          
          */
            if(alpabet[i] == buffer[j]){ //만약 같은 단어라면
                cout << j << " "; //그 단어의 인덱스를 출력해준다
                check = 0;
                break;
            }else{
                check = 1; //아니면 check를 1로 바꾼다
            }
            
        }
        if(check == 1){ //check가 1이라면 알파벳이 문자열 내에 없다는 의미로
            cout << -1 << " "; // -1을 출력한다
        }
    }
    return 0;
}


/*
1. 첫번째 코드 문제점 : check에 대한 변수의 역할을 확실히 생각하지 못함

*/
