#include <stdio.h>

int n;
int cost[15][15];
int visited[15];
int minCost = 999999;

void solve(int city, int count, int current) {
    
    if (count == n) {
        int total = current + cost[city][0];
        if (total < minCost)
            minCost = total;
        return;
    }

    
    for (int next = 0; next < n; next++) {
        if (!visited[next]) {
            visited[next] = 1;
            solve(next, count + 1, current + cost[city][next]);
            visited[next] = 0;  
        }
    }
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    visited[0] = 1;
    solve(0, 1, 0);  

    printf("%d\n", minCost);
    return 0;
}