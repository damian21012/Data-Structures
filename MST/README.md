
# 최소비용 신장트리 프로젝트

## 개요
Prim 알고리즘과 Kruskal 알고리즘을 이용해  
최소비용 신장트리를 구성하는 프로그램입니다.

## 파일 설명
- `prim.c` : Prim 알고리즘 구현
- `kruskal.c` : Kruskal 알고리즘 구현
- `input_graph.txt` : 그래프 입력 데이터 (선택)
- `보고서.pdf` : 프로젝트 보고서
- `images/mst_result.png` : 실행 결과 이미지 (선택)

## 실행 방법

```bash
# Prim 알고리즘 실행
gcc prim.c -o prim
./prim

# Kruskal 알고리즘 실행
gcc kruskal.c -o kruskal
./kruskal
