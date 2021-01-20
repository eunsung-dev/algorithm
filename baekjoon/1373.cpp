// 2진수 8진수
#include <iostream>
#include <string>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int size = s.size();
    if(size % 3 == 1){
        cout << s[0];
    }
    else if(size % 3 == 2){
        cout << (s[0] - '0') * 2 + (s[1] - '0') * 1;
    }
    for(int i = size % 3; i < size; i+=3){
        cout << (s[i] - '0') * 4 + (s[i+1] - '0') * 2 + (s[i+2] - '0') * 1;
    }
    return 0;
}