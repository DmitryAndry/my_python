#include <stdio.h>

void Ex2 (int matrix[][], int M, int N)
{
    for(int i=0, min=0, max=0, tmp; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(matrix[i][min] > matrix[i][j]) min = j;
            if(matrix[i][max] < matrix[i][j]) max = j;
        };
        if( min != max ) {
            tmp = matrix[i][min];
            matrix[i][min] = matrix[i][max];
            matrix[i][max] = tmp;
        };
    };

    puts("Result:");
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++)
            printf("%5d ",matrix[i][j]);
        puts("");
    }
};
