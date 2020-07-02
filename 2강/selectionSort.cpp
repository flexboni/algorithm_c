#include <stdio.h>

int main(void)
{
    int i, j, min, index, tmp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int size = 10;
    for (i = 0; i < size; i++)
    {
        min = 99999; // 초기화

        for (j = i; j < size; j++)
        {
            // 최소값 찾기
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        // 스와핑
        tmp = array[i];
        array[i] = array[index];
        array[index] = tmp;
    }
    // 출력
    for ( i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}