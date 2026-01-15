#include <stdio.h>

#define INF 999

int main() {
    int n = 5;
    int cost[5][5] = {
        {INF,2,3,INF,INF},
        {2,INF,1,4,INF},
        {3,1,INF,5,6},
        {INF,4,5,INF,7},
        {INF,INF,6,7,INF}
    };

    int visited[5]={1,0,0,0,0};
    int ne=1, mincost=0;

    while(ne < n) {
        int min=INF, a=0, b=0;
        for(int i=0;i<n;i++)
            if(visited[i])
                for(int j=0;j<n;j++)
                    if(!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a=i; b=j;
                    }

        visited[b]=1;
        printf("Edge %d: %d-%d cost=%d\n", ne++, a, b, min);
        mincost += min;
    }

    printf("Minimum cost = %d", mincost);
    return 0;
}