//#include <stdio.h>
//#define INF 9999
//
//// Prim 알고리즘 구현
//void MST_prim(int weight[][100], int n) {
//    int selected[100] = { 0 }; // MST에 포함된 정점 표시
//    int edge_count = 0;
//    int total_cost = 0;
//
//    selected[0] = 1; // 시작 정점 (0번)
//
//    printf("선택된 간선들 (정점1 - 정점2 : 가중치):\n");
//
//    while (edge_count < n - 1) {
//        int min = INF;
//        int u = -1, v = -1;
//
//        for (int i = 0; i < n; i++) {
//            if (selected[i]) {
//                for (int j = 0; j < n; j++) {
//                    if (!selected[j] && weight[i][j] && weight[i][j] < min) {
//                        min = weight[i][j];
//                        u = i;
//                        v = j;
//                    }
//                }
//            }
//        }
//
//        if (u != -1 && v != -1) {
//            printf("%d - %d : %d\n", u, v, weight[u][v]);
//            selected[v] = 1;
//            total_cost += weight[u][v];
//            edge_count++;
//        }
//    }
//
//    printf("최소 신장 트리의 총 비용: %d\n", total_cost);
//}
//
//int main() {
//    int n = 7;
//    int weight[100][100] = {
//        {0, 29, INF, INF, INF, 10, 7},
//        {29, 0, 16, INF, INF, INF, 15},
//        {INF, 16, 0, 12, INF, INF, 13},
//        {INF, INF, 12, 0, 22, INF, 18},
//        {INF, INF, INF, 22, 0, 27, 25},
//        {10, INF, INF, INF, 27, 0, INF},
//        {7, 15, 13, 18, 25, INF, 0}
//    };
//
//    MST_prim(weight, n); // 함수 호출
//    return 0;
//}
