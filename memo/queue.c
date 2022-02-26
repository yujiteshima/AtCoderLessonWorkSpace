#include<stdio.h>
#include<string.h>
#define LEN 100005

/* プロセスを表す構造体 */
typedef struct pp
{
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) { return a < b ? a : b; } /* 最小値を返す */
