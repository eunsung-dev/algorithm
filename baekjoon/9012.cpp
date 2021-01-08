// stack을 이용한 문제
#include <iostream>
using namespace std;
bool VPS(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            cnt += 1;
        }
        else{
            cnt -= 1;
        }
        if(cnt < 0)
            return 0;
    }
        if(cnt == 0)
            return 1;
        else
            return 0;
}
int main(void){
    int T = 0;
    string s;
    cin >> T;
    while(T--){
        cin >> s;
        if(VPS(s) == 1){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}