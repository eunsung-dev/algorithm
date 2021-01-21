// 팩토리얼
#include <iostream>
using namespace std;
int main(void){
    int N;
    cin >> N;
    int ans = 1;
    for(int i = 2; i <= N; i++)
        ans *= i;
    cout << ans;
    return 0;
}