#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];
void push(int x){
    /* topを加算してからその位置へ挿入 */
    S[++top] = x;
}

int pop() {
    top--;
    /* topが差していた要素を返す */
    return S[top + 1];
}