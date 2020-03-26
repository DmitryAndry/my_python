#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define M 3
#define N 4

void Ex1 (void)
{
    int results[N] = {INT_MAX};
    int m[M][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    for(int i=0, j=0; i<M; i++){
        for(; j<N; j++) {
            printf("%5d", m[i][j]);
            if(results[j] > m[i][j]) results[j] = m[i][j];
        }
        puts("");
    };

    puts("Result:");

    for(int i=0; i<N; i++)
        printf("%d ", results[i]);
    puts("");
};
