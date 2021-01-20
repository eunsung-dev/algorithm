// 이진수 변환
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    long long N = 0;
    string ans = "";
    cin >> N;
    if(N == 1)
        cout << "1";
    while(N > 1){
        if(N % 2 == 1)
            ans += '1';
        else
            ans += '0';
        N /= 2;
    }
    ans += '1';
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}