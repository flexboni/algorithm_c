#include <stdio.h>

// 문제 : https://www.acmicpc.net/problem/2752

int array[3], number = 3;

int main(void)
{
    int i, j, min, index, temp;

    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    for (size_t i = 0; i < number; i++)
    {
        min = 4; // 주어진 수의 최댓값 보다 항상 큰 값으로 초기화
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