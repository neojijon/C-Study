#include <stdio.h>

int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

int (*getAdd(int x, int y))(int, int)    // �Լ� ������ ��ȯ, int�� �Ű����� �� ��
{
    printf("%d %d\n", x, y);    // x, y�� getAdd �Լ��� �Ű�����
    return add;
}

int main()
{
    printf("%d\n", getAdd(8, 9)(10, 20));    // 8, 9�� getAdd�� ����
                                             // 10, 20�� getAdd���� ��ȯ�� add�� ����

    return 0;
}
