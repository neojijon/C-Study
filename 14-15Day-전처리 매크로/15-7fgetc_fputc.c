#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char buffer[100] = { 0, };
    int c1 = 0;

    FILE *fp = fopen("hello.txt", "w+");    // ������ �б�/���� ���� ����

    for (int i = 0; i < 10; i++)    // 10�� �ݺ��ϸ鼭
        fputc('a', fp);             // ���Ͽ� ���� a�� ����

    rewind(fp);    // ���� �����͸� ������ ó������ �̵���Ŵ
    while (1)
    {
        c1 = fgetc(fp);    // ���Ͽ��� ���ڸ� ����
        if (feof(fp))      // ���� �����Ͱ� ������ ���� ������
            break;         // �ݺ��� ����

        putchar(c1);       // ���� ���
    }

    fclose(fp);

    return 0;
}
