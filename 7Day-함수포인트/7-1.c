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
    int (*fp[4])(int, int);    // int�� ��ȯ��, int�� �Ű����� �� ���� �ִ� �Լ� ������ �迭 ����

    fp[0] = add;    // ù ��° ��ҿ� ���� �Լ��� �޸� �ּ� ����
    fp[1] = sub;    // �� ��° ��ҿ� ���� �Լ��� �޸� �ּ� ����
    fp[2] = mul;    // �� ��° ��ҿ� ���� �Լ��� �޸� �ּ� ����
    fp[3] = div;    // �� ��° ��ҿ� ������ �Լ��� �޸� �ּ� ����

    printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���: ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);    // �Լ� ��ȣ�� ����� ���� �Է¹���

    printf("%d\n", fp[funcNumber](num1, num2));    // �Լ� ������ �迭�� �ε����� �����Ͽ� �Լ� ȣ��

    return 0;
}
