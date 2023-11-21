#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int funcNumber;    // �Լ� ��ȣ
    int num1, num2;
    int (*fp)(int, int) = NULL;    // int�� ��ȯ��, int�� �Ű����� �� ���� �ִ� �Լ� ������ ����

    printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);    // �Լ� ��ȣ�� ����� ���� �Է¹���

    switch (funcNumber)   // �Լ� ��ȣ�� ���� �Լ� ������ ����
    {
    case 0:               // 0�̸�
        fp = add;         // ���� �Լ�
        break;
    case 1:               // 1�̸�
        fp = sub;         // ���� �Լ�
        break;
    case 2:               // 2�̸�
        fp = mul;         // ���� �Լ�
        break;
    case 3:               // 3�̸�
        fp = div;         // ������ �Լ�
        break;
    }
    
    printf("%d\n", fp(num1, num2));    // �Լ� �����͸� ����Ͽ� ��� ��� ���

    return 0;
}
