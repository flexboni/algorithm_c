#include <stdio.h>

int d(int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    return d(x - 1) + d(x - 2);
}

int dd[100];

int fibonacci(int x)
{
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    if (dd[x] != 0)
        return dd[x];
    return dd[x] = fibonacci(x - 1) + fibonacci(x - 2);
}

int main(void)
{
    printf("%d", d(10));
    // printf("%d", d(50)); // 실행시 2의 50 제곱을 넘는 계산량으로 컴퓨터에 부하가 커 처리할 수 없다.
    printf("%d", fibonacci(30)); // DP 로 인해 계산이 간결하고 빨라짐
}
