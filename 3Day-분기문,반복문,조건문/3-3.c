#include <stdio.h>

int main()
{
    float num1 = 0.1f;
    char c1 = 'a';

    if (num1 == 0.1f)  // �Ǽ� ��
        printf("0.1�Դϴ�.\n");

    if (c1 == 'a')     // ���� ��
        printf("a�Դϴ�.\n");

    if (c1 == 97)      // ���ڸ� ASCII �ڵ�� ��
        printf("a�Դϴ�.\n");

    return 0;
}
