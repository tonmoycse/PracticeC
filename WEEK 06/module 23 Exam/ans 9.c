#include<stdio.h>

void trnspose(int matrix[10][10], int row, int col){
    int transpose[10][10], i, j;


    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
           transpose[i][j] = matrix[j][i];
        }
    }

    printf("\n");

    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j, r, c, matrix[10][10];
    r =3;
    c=3;

    printf("Enter the elements of the matrix: \n");
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    trnspose(matrix, r, c);
    return 0;
}