#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>    // fopen, fscanf, fclose �Լ��� ����� ��� ����

int main()
{
    char s1[10];
    int num1;

    FILE *fp = fopen("hello.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ

    fscanf(fp, "%s %d", s1, &num1);   // ������ �����Ͽ� ���Ͽ��� ���ڿ� �б�

    printf("%s %d\n", s1, num1);      // Hello 100: ���Ͽ��� ���� ���� ���

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
