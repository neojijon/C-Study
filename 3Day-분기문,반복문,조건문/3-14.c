#include <stdio.h>

int main()
{
    int i = 100;

    do    // ó�� �� ���� �Ʒ� �ڵ尡 �����
    {
        printf("Hello, world! %d\n", i);    // Hello, world!�� i�� ���� �Բ� ���
        i--;                                // i�� 1�� ���ҽ�Ŵ
    } while (i > 0);    // i�� 0���� Ŭ �� �ݺ�. 100���� 1���� �����ϸ鼭 100�� �ݺ�

    return 0;
}
