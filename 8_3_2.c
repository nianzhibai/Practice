#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    float a;
    scanf("%f", &a);
    int b = (int)a;
    if (-0.5 < a-b &&a - b < 0.5)
    {
        printf("%d\n", b);
    }
    else if (a - b >= 0.5)
    {
        b++;
        printf("%d\n", b);
    }
    else if (a - b <= -0.5)
    {
        b = b - 1;
        printf("%d\n", b);
    }

    return 0;
}