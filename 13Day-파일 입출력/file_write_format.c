#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ����� ���� ������ ���� ����
#include <stdio.h>    // fopen, fprintf, fclose �Լ��� ����� ��� ����

int main()
{
    FILE *fp = fopen("hello.txt", "w");     // hello.txt ������ ���� ���(w)�� ����.
                                            // ���� �����͸� ��ȯ

    fprintf(fp, "%s %d\n", "Hello", 100);   // ������ �����Ͽ� ���ڿ��� ���Ͽ� ����

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
