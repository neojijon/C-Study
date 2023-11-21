#include <stdio.h>
#include <time.h>

void delay(unsigned int sec)    // Ư�� �ð�(��)��ŭ ��ٸ��� �Լ�
{
    clock_t ticks1 = clock();
    clock_t ticks2 = ticks1;
    while ((ticks2 / CLOCKS_PER_SEC - ticks1 / CLOCKS_PER_SEC) < (clock_t)sec)
        ticks2 = clock();
}

int main()
{
    setvbuf(stdout, NULL, _IOFBF, 10);    // ��� ������ ũ�⸦ 10���� ����

    printf("Hello, world!\n");

    delay(3);    // 3�ʰ� ��ٸ�

    return 0;
}
