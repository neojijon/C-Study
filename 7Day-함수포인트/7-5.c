#include <stdio.h>

int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

int (*getAdd())(int, int)    // �Լ� �����͸� ��ȯ������ ����
{
    return add;    // add �Լ��� �޸� �ּҸ� ��ȯ
}

int main()
{
    printf("%d\n", getAdd()(10, 20));    // 30: getAdd�� ȣ���� �� ��ȯ������ add �Լ� ȣ��

    return 0;
}
