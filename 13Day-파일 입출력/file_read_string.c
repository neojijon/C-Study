#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>    // fopen, fread, fclose �Լ��� ����� ��� ����

int main()
{
    char buffer[20] = { 0, };    // ������ ���� �� ����� �ӽ� ����, �̸� 0���� ���� �ʱ�ȭ

    FILE *fp = fopen("hello.txt", "r");     // hello.txt ������ �б� ���� ����.
                                            // ���� �����͸� ��ȯ

    fread(buffer, sizeof(buffer), 1, fp);   // hello.txt���� ���� ũ��(20����Ʈ)��ŭ 1�� ���� ����

    printf("%s\n", buffer);    // Hello, world!: ������ ���� ���

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
