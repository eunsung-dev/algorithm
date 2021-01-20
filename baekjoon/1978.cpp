// 소수 찾기
#include <iostream>
using namespace std;
bool prime(int n){
    if(n < 2)
        return false;
    else{
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
}
int main(void){
    int N, cnt = 0;
    int array[101];
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> array[i];
        if(prime(array[i]) == true)
            cnt++;
    }
    cout << cnt;
    return 0;
}