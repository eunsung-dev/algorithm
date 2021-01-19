// 진법 변환 2
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void){
    int N, B;
    cin >> N >> B;
    string ans = "";
    while(N > 0){
        int r = N % B;
        if(r < 10){
            ans += (char)(r + '0');
        }
        else{
            ans += (char)(r - 10 + 'A');
        }
        N /= B;
    }    
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}