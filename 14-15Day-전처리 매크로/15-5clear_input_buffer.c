#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void clearInputBuffer()
{
    // �Է� ���ۿ��� ���ڸ� ��� ������ \n�� ������ �ݺ��� �ߴ�
    while (getchar() != '\n');
}

int main()
{
    char phoneNumber[14];
    char name[10];

    fputs("��ȭ��ȣ�� �Է��ϼ���: ", stdout);
    scanf("%s", phoneNumber);     // scanf�� �Է��� ����
    clearInputBuffer();           // �Է� ���۸� ���

    fputs("�̸��� �Է��ϼ���: ", stdout);
    fgets(name, sizeof(name), stdin);    // fgets�� �Է��� ���� �� ����

    printf("��ȭ��ȣ: %s\n", phoneNumber);
    printf("�̸�: %s\n", name);

    return 0;
}
