// K번째 수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[5000000] = {0,};
int main(void){
    int N, K;
    scanf("%d %d", &N, &K);
    K -= 1;
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    nth_element(a, a+K, a+N);
    printf("%d",a[K]);
    return 0;
}