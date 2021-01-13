// 카드 구매하기
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int P[N+1];
    int d[N+1];
    for(int i = 0; i < N+1; i++){
        P[i] = 0;
        d[i] = 0;
    }
    for(int i = 1; i <= N; i++){
        cin >> P[i];
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            d[i] = max(d[i], d[i-j] + P[j]);
        }
    }
    cout << d[N];
    return 0;
}