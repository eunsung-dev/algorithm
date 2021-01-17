// 계단 오르기
#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    long long A[301] = {0,};
    long long d[301][3] = {0,};
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
    d[1][1] = A[1];
    for(int i = 2; i <= n; i++){
        d[i][2] = d[i-1][1] + A[i];
        d[i][1] = max(d[i-2][1], d[i-2][2]) + A[i];
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++){
    ans = max(d[i][1], d[i][2]);
    }
    cout << ans;
    return 0;
}