#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>    // fopen, fgets, fclose �Լ��� ����� ��� ����

int main()
{
    char buffer[20];    // ������ ���� �� ����� �ӽ� ����

    FILE *fp = fopen("hello.txt", "r");    // hello.txt ������ �б� ���� ����.
                                           // ���� �����͸� ��ȯ

    fgets(buffer, sizeof(buffer), fp);     // hello.txt���� ���ڿ��� ����

    printf("%s\n", buffer);    // Hello, world!: ������ ���� ���

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
