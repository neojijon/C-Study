#include <stdio.h>

int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

typedef int (*FP)(int, int);    // FP�� �Լ� ������ ��Ī���� ����

struct Calc {
    FP fp;    // �Լ� ������ ��Ī�� ����ü ��� �ڷ������� ���
};

void executer(FP fp)    // �Լ� ������ ��Ī�� �Ű����� �ڷ������� ���
{
    printf("%d\n", fp(70, 80));
}

int main()
{
    FP fp1;      // �Լ� ������ ��Ī���� ���� ����
    fp1 = add;
    printf("%d\n", fp1(10, 20));     // 30

    FP fp[10];   // �Լ� ������ ��Ī���� �迭 ����
    fp[0] = add;
    printf("%d\n", fp[0](30, 40));   // 70

    struct Calc c;
    c.fp = add;
    printf("%d\n", c.fp(50, 60));    // 110
    
    executer(add);    // 150: executer�� ȣ���� �� add �Լ��� �޸� �ּҸ� ����

    return 0;
}
