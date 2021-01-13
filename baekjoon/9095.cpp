// 1, 2, 3 더하기
#include <iostream>
using namespace std;
int main(void){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int d[n+1];
        d[1] = 1, d[2] = 2, d[3] = 4;
        for(int i = 4; i <= n; i++){
            d[i] = d[i-1] + d[i-2] + d[i-3];
        }
        cout << d[n] << endl;
    }
    return 0;
}