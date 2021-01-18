// 타일 채우기
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    long long d[31] = {0,};
    d[0] = 1;
    for(int i = 2; i <= N; i+=2){
        d[i] = d[i-2]*3;
        for(int j = i-4; j >= 0; j-=2){
            d[i] += d[j]*2;
        }
    }
    cout << d[N];
    return 0;
} 