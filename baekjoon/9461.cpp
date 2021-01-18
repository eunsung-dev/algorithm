// 파도반 수열
#include <iostream>
using namespace std;
int main(void){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long d[101] = {0,};
        d[1] = 1;
        d[2] = 1;
        d[3] = 1;
        for(int i = 4; i <= N; i++){
            d[i] = d[i-2] + d[i-3];
        }
        cout << d[N] << endl;
    }
    return 0;
}