#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // ���� �Է¹���

    switch (num1)    // num1�� ���� ���� �б�
    {
    case 1:
    {    // case���� ������ �����Ϸ��� �߰�ȣ�� ������
        int num2 = num1;
        printf("%d�Դϴ�.\n", num2);
        break;
    }
    case 2:
        printf("2�Դϴ�.\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}
