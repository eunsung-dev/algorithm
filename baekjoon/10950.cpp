// 입력받는 케이스마다 배열에 저장 안하고 바로 출력
#include <iostream>
using namespace std;
int main(void){
    int t;
    int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}