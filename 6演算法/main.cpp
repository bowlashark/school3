#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // ����@�Ӥj�j��A���Ӯɶ�
    volatile unsigned long long sum = 0;
    for (unsigned long long i = 0; i < 500000000ULL; i++)
    {
        sum += i;
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("�p�⧹���Asum = %llu\n", sum);
    printf("����ɶ�: %.3f ��\n", cpu_time_used);

    return 0;
}
