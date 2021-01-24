#include <iostream>
using namespace std;
int main(void){
    int N, M;
    scanf("%d %d",&N,&M);
    int A[N][M], B[N][M], C[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}