#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, M, i, j;
    int Arr[100][100];

    scanf("%d%d", &N, &M);

    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            scanf("%d", &Arr[i][j]);
        }
    }

    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            if(Arr[i][j]==i && Arr[i][j]==j){
                Arr[i][j]+=3;
            }
            else if(Arr[i][j]==i){
                Arr[i][j]+=2;
            }
            else if(Arr[i][j]==j){
                Arr[i][j]+=1;
            }

        }

    }

    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }   
    return 0;
}