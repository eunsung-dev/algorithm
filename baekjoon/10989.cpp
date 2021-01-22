// 수 정렬하기 3
#include <iostream>
using namespace std;
int main(void){
    int N;
    int cnt[10001] = {0,};
    int temp = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &temp);
        cnt[temp] += 1;
    }
    for(int i = 1; i <= 10000; i++){
        if(cnt[i] > 0){
            for(int j = 0; j < cnt[i]; j++)
                printf("%d\n", i);
        }
    }

    return 0;
}