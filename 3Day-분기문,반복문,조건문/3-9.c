#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 0;

    if (num1 && num2)      // num1�� num2�� ��� ������ �˻�
        printf("��\n");
    else
        printf("����\n");  // num1�� ���̹Ƿ� ������ ��µ�

    if (num1 || num2)      // num1�� num2 �� �� �ϳ��� ������ �˻�
        printf("��\n");    // num1�� ���̹Ƿ� ���� ��µ�
    else
        printf("����\n");

    if (!num1)             // num1�� �ݴ�� ������
        printf("��\n");
    else
        printf("����\n");  // ���� ���������Ƿ� ������ ��µ�

    return 0;
}
