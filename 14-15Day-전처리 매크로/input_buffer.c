#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char phoneNumber[14];
    char name[10];

    fputs("��ȭ��ȣ�� �Է��ϼ���: ", stdout);
    scanf("%s", phoneNumber);    // scanf�� �Է��� ����

    // scanf�� �Է¹��� �������� �Է� ���ۿ� \n�� ��������
    
    fputs("�̸��� �Է��ϼ���: ", stdout);
    fgets(name, sizeof(name), stdin);    // �Է� ������ \n ������ fgets�� �׳� �Ѿ

    printf("��ȭ��ȣ: %s\n", phoneNumber);
    printf("�̸�: %s\n", name);

    return 0;
}
