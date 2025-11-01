#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // 執行一個大迴圈，消耗時間
    volatile unsigned long long sum = 0;
    for (unsigned long long i = 0; i < 500000000ULL; i++)
    {
        sum += i;
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("計算完成，sum = %llu\n", sum);
    printf("執行時間: %.3f 秒\n", cpu_time_used);

    return 0;
}
