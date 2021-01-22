// 수 정렬하기 2
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(void){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    sort(a,a+N);
    for(int i = 0; i < N; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}