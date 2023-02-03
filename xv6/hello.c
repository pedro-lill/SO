#include "types.h"
#include "stat.h"
#include "user.h"
#define N 10
#define INT_MAX 1000000000

void dijkstra(int mat[N][N], int start) {
    int i = start;

    int dist[N];
    int vis[N];

    for(int j = 0; j < N; j++) {
        dist[j] = INT_MAX;
        vis[j] = 0;
    }
    dist[start] = 0;

    while (i < N) {

        int min = INT_MAX, index = 0;
        for(int w = 0; w < N; w++) {
            if (vis[w] == 0 && dist[w] <= min) {
                min = dist[w];
                index = w;
            }
        }

        if(min == INT_MAX || index > N)
            return;

        i = index;
        vis[index] = 1;

        for(int w = 0; w < N; w++) {
            if(!vis[w] && mat[index][w] && dist[index] != INT_MAX && dist[index] + mat[index][w] < dist[w]) {
                dist[w] = dist[index] + mat[index][w];
            }
        }
    }
}

void matrix(int mat[N][N]) {
    for (int i =0; i < N; i++) {
        for (int j=0; j < N; j++) {
            mat[i][j] = 10;
        }
    }
}



int main(int agrc, char *argv[]) {
    int mat[N][N];

    for (int i = 0; i < 10; i++) {
        if (!fork(atoi(argv[1])+i*10)) {

            matrix(mat);
            for (int z = 0; z < 100000; z++) {
                dijkstra(mat, 0);
            }
            printf(1, "%d\n", getpid());
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        wait();
    }
    exit();
}
