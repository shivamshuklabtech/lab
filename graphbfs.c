#include <stdio.h>

int q[10], front=0, rear=0;
int visited[10]={0}, a[10][10]={0};

void bfs(int v, int n) {
    int i;
    printf("%d ", v);
    visited[v]=1;
    q[rear++] = v;

    while(front < rear) {
        v = q[front++];
        for(i=0;i<n;i++) {
            if(a[v][i] && !visited[i]) {
                printf("%d ", i);
                visited[i]=1;
                q[rear++] = i;
            }
        }
    }
}

int main() {
    int n=5;
    // A=0, B=1, C=2, D=3, E=4

    a[0][1]=a[1][0]=1;
    a[0][2]=a[2][0]=1;
    a[1][3]=a[3][1]=1;
    a[2][4]=a[4][2]=1;
    a[3][4]=a[4][3]=1;

    printf("BFS from A:\n");
    bfs(0,n);
    return 0;
}