// 진법 변환
#include <iostream>
#include <string>
using namespace std;
int main(void){
    int B, ans = 0;
    string N;
    cin >> N >> B;
    for(int i = 0; i < N.size(); i++){
        if(N[i] >= '0' && N[i] <= '9'){
            ans = ans * B + (N[i] - '0');
        }
        else{
            ans = ans * B + (N[i] - 'A' + 10);
        }
    }
    cout << ans;
    return 0;
}