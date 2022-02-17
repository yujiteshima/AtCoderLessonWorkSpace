#include<stdio.h>

void keisan(int *x){
    *x = 25;
}

int main (void) {
    int apple = 10;
    printf("1回目：%d\n", apple);
    keisan(&apple);
    printf("書き換えました\n");
    printf("2回目：%d\n", apple);
}