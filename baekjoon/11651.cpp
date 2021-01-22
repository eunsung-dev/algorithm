// 좌표 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<pair<int,int> > a(N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &a[i].second, &a[i].first);
    }
    sort(a.begin(),a.end()); 
    for(int i = 0; i < N; i++){
        printf("%d %d\n", a[i].second, a[i].first);
    }
    // for(auto &p : a){
    //     printf("%d %d", p.second, p.first);
    // }
    return 0;
}