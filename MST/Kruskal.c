//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 100
//#define INF 9999
//
//typedef struct {
//    int u, v;    // 간선의 양 끝 정점
//    int weight;  // 간선 가중치
//} Edge;
//
//int parent[MAX];
//
//// 서로소 집합 find 함수
//int find(int x) {
//    if (parent[x] == x) return x;
//    return parent[x] = find(parent[x]);
//}
//
//// 서로소 집합 union 함수
//void union_set(int a, int b) {
//    a = find(a);
//    b = find(b);
//    if (a != b) parent[b] = a;
//}
//
//// 간선 비교 함수 (qsort용)
//int cmp(const void* a, const void* b) {
//    Edge* e1 = (Edge*)a;
//    Edge* e2 = (Edge*)b;
//    return e1->weight - e2->weight;
//}
//
//void MST_kruskal(Edge edges[], int n, int edgeCount) {
//    int i, count = 0, total_cost = 0;
//
//    // 초기 서로소 집합 설정
//    for (i = 0; i < n; i++) parent[i] = i;
//
//    // 간선 가중치 기준 오름차순 정렬
//    qsort(edges, edgeCount, sizeof(Edge), cmp);
//
//    printf("선택된 간선들 (정점1 - 정점2 : 가중치):\n");
//    for (i = 0; i < edgeCount && count < n - 1; i++) {
//        int uRoot = find(edges[i].u);
//        int vRoot = find(edges[i].v);
//
//        if (uRoot != vRoot) { // 사이클이 발생하지 않으면 선택
//            union_set(uRoot, vRoot);
//            printf("%d - %d : %d\n", edges[i].u, edges[i].v, edges[i].weight);
//            total_cost += edges[i].weight;
//            count++;
//        }
//    }
//
//    printf("최소 신장 트리의 총 비용: %d\n", total_cost);
//}
//
//int main() {
//    int n = 7;
//    Edge edges[] = {
//        {0, 1, 29}, {0, 5, 10}, {0, 6, 7},
//        {1, 2, 16}, {1, 6, 15},
//        {2, 3, 12}, {2, 6, 13},
//        {3, 4, 22}, {3, 6, 18},
//        {4, 5, 27}, {4, 6, 25}
//    };
//    int edgeCount = sizeof(edges) / sizeof(edges[0]);
//
//    MST_kruskal(edges, n, edgeCount);
//    return 0;
//}
