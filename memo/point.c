#include<stdio.h>

int main(void) {
    int apple = 10;
    int *p;
    p = &apple;
    printf("%d", *p);
    // printf("%p", p);
    return 0;
}