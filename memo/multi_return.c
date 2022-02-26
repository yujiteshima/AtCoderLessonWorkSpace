#include<stdio.h>

void keisan(int n1, int n2, int *tasu, int *hiku) {
    *tasu = n1 + n2;
    *hiku = n1 - n2;
}

int main (void) {
    int num1 = 30;
    int num2 = 10;
    int tasizan = 0, hikizan = 0;
    keisan(num1, num2, &tasizan, &hikizan);
    printf("足し算の結果: %d\n", tasizan);
    printf("引き算の結果: %d\n", hikizan);
    return 0;
}