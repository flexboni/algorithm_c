#include <stdio.h>

// 문제 : https://www.acmicpc.net/problem/2750

int array[1001]; // 주어진 수의 갯수보다 +1 된 배열을 선언하는게 좋다.

int main(void)
{
    int number, i, j, min, index, temp;

    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    for (size_t i = 0; i < number; i++)
    {
        min = 1001; // 주어진 수의 최댓값 보다 항상 큰 값으로 초기화
        for (size_t j = i; j < number; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for (size_t i = 0; i < number; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}