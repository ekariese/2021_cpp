#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    cout<<"문자열을 입력하세요(한글은 불가)"<<endl;
    getline(cin,s,'\n');
    int len = s.length();
    
    for (int i=0; i<len ; i++) {
        string first = s.substr(0,1); //맨 앞 문자 1개를 문자열로 분리
        string sub = s.substr(1,len-1); //나머지 문자들을 문자열로 분리
        s = sub +first; //두 문자열을 연결하여 새로운 문자열 생성
        cout <<s<<endl;
    }
}

