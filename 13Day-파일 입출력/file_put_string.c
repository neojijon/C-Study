#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>    // fopen, fputs, fclose �Լ��� ����� ��� ����

int main()
{
    FILE *fp = fopen("hello.txt", "w");    // hello.txt ������ ���� ���(w)�� ����.
                                           // ���� �����͸� ��ȯ

    fputs("Hello, world!", fp);    // ���Ͽ� ���ڿ� ����

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
