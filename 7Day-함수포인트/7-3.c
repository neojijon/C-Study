#include <stdio.h>

int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

void executer(int (*fp)(int, int))    // �Լ� �����͸� �Ű������� ����
{
    printf("%d\n", fp(10, 20));    // 30: �Ű������� �Լ� ȣ��
}

int main()
{
    executer(add);    // executer�� ȣ���� �� add �Լ��� �޸� �ּҸ� ����

    return 0;
}
