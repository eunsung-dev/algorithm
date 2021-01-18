// 제곱수의 합
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int d[100001] = {0,};
    for(int i = 1; i <= N; i++){
        d[i] = i;
        for(int j = 1; j*j <= i; j++){
            if(d[i] > d[i - j*j] + 1)
                d[i] = d[i - j*j] + 1;
        }
    }
    cout << d[N];
    return 0;
}