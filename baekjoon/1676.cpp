// 팩토리얼 0의 개수
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int ans = 0;
    for(int i = 5; i <= N; i*=5){
        ans += N/i;
    }
    cout << ans;
    return 0;
}