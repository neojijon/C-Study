#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // ���� �Է¹���

    switch (num1)
    {
    case 1:    // 1 �Ǵ�
    case 2:    // 2�� �� �ڵ� ����
        printf("1 �Ǵ� 2�Դϴ�.\n");
        break;
    case 3:    // 3 �Ǵ�
    case 4:    // 4�� �� �ڵ� ����
        printf("3 �Ǵ� 4�Դϴ�.\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
