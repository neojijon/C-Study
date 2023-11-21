#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // ����
    printf("%u\n", 10);      // 10: ��ȣ ���� 10�� ����
    printf("%d\n", -20);     // -20: ��ȣ �ִ� 10�� ����
    printf("%i\n", -20);     // -20: ��ȣ �ִ� 10�� ����
    printf("%o\n", 071);     // 71: ��ȣ ���� 8�� ����
    printf("%x\n", 0xF1);    // f1: ��ȣ ���� 16�� ����(�ҹ���)
    printf("%X\n", 0xF1);    // F1: ��ȣ ���� 16�� ����(�빮��)

    // long, long long ����
    printf("%lu\n", ULONG_MAX);      // 4294967295: ��ȣ ���� long
    printf("%ld\n", LONG_MAX);       // 2147483647: ��ȣ �ִ� long
    printf("%llu\n", ULLONG_MAX);    // 18446744073709551615: ��ȣ ���� long long
    printf("%lld\n", LLONG_MAX);     // 9223372036854775807: ��ȣ �ִ� long long

    // �Ǽ�
    printf("%f\n", 1.2f);    // 1.200000: �Ǽ��� �Ҽ������� ǥ��(�ҹ���)
    printf("%F\n", 1.2f);    // 1.200000: �Ǽ��� �Ҽ������� ǥ��(�빮��)
    printf("%e\n", 1.2f);    // 1.200000e+00: �Ǽ� ���� ǥ��� ���(�ҹ���)
    printf("%E\n", 1.2f);    // 1.200000E+00: �Ǽ� ���� ǥ��� ���(�빮��)
    printf("%g\n", 1.2f);    // 1.2: %f�� %e �߿��� ª�� ���� ���(�ҹ���)
    printf("%G\n", 1.2f);    // 1.2: %F�� %E �߿��� ª�� ���� ���(�빮��)
    printf("%a\n", 1.2f);    // 0x1.3333340000000p+0: �Ǽ��� 16�������� ǥ��(�ҹ���)
    printf("%A\n", 1.2f);    // 0X1.3333340000000P+0: �Ǽ��� 16�������� ǥ��(�빮��)

    printf("%Lf", LDBL_MAX);    // ����: long double
    printf("%Le", LDBL_MAX);    // 1.797693e+308: long double

    // ����, ���ڿ�
    printf("%c\n", 'a');    // a: ����
    printf("%s\n", "Hello, world!");    // Hello, world!: ���ڿ�

    // ������
    int num1;
    void *ptr = &num1;
    printf("%p\n", ptr);    // 008BFB6C: �������� �޸� �ּ�
                            // 0x8bfb6c: ������, OS X������ �տ� 0x�� �ٰ�, A~F�� �ҹ��ڷ� ���
                            // ���� �ڸ����� 0�� ����

    // % ��ȣ
    printf("%%\n");    // %: % ��ȣ ���

    return 0;
}
