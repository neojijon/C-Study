#define _CRT_NONSTDC_NO_WARNINGS    // ��ǥ�� �Լ��� ������� �� ���� ����
#define _CRT_SECURE_NO_WARNINGS     // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2;

    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    printf("�� ������ ���� %d�Դϴ�.\n", num1 + num2);

    printf("�ƹ� Ű�� �Է��ϸ� �ܼ� â�� �ݽ��ϴ�.\n");
    getch();    // Ű�� �Է��� ������ �ܼ� â�� ��� ���� �ֵ��� ����

    return 0;
}
