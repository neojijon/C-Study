#include <stdio.h>

struct Calc {
    int (*fp)(int, int);    // �Լ� �����͸� ����ü ����� ����
};

int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

int main()
{
    struct Calc c;

    c.fp = add;    // add �Լ��� �޸� �ּҸ� ����ü c�� ����� ����

    printf("%d\n", c.fp(10, 20));    // 30: ����ü ����� add �Լ� ȣ��

    return 0;
}
