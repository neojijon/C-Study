#include <stdio.h>
#include <float.h>    // �Ǽ� �ڷ����� ��� �ּڰ�, �ִ��� ���ǵ� ��� ����
#include <math.h>     // ���Ѵ� INFINITY�� ���ǵ� ��� ����

int main()
{
    float num1 = FLT_MAX;
    float num2;

    num1 = num1 * 1000.0f;   // float�� ��� �ִ񰪿� 1000�� ���Ͽ� ���Ѵ밡 ��

    if (num1 == INFINITY)    // INFINITY�� ���Ͽ� ���� ���Ѵ����� �˻�
        printf("infinity\n");

    if (isinf(num1))         // isinf�� ����Ͽ� ���� ���Ѵ����� �˻�
        printf("infinity\n");

    num2 = 0.0f;
    num1 = 1.0f / num2;      // �Ǽ��� 0���� ������ ���Ѵ�

    if (isinf(num1))         // isinf�� ����Ͽ� ���� ���Ѵ����� �˻�
        printf("infinity\n");

    return 0;
}
