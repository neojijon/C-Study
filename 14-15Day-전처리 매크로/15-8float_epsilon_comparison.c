#include <stdio.h>
#include <float.h>    // float�� �ӽ� ���Ƿ� �� FLT_EPSILON�� ���ǵ� ��� ����
#include <math.h>     // float�� ������ ���ϴ� fabsf �Լ��� ���� ��� ����

int main()
{
    float num1 = 0.0f;
    float num2 = 0.1f;

    // 0.1�� 10�� ����
    for (int i = 0; i < 10; i++)
    {
        num1 = num1 + num2;
    }

    // num1: 1.000000119209290
    if (fabsf(num1 - 1.0f) <= FLT_EPSILON)    // ������ ���� ���� ���� ���̸� ���ϰ� ��������
                                              // ���� �� FLT_EPSILON���� �۰ų� ������ �Ǵ�
                                              // ������ �ӽ� ���Ƿ� ���϶�� ���� ������ ��
        printf("true\n");    // ���� ���̰� �ӽ� ���Ƿк��� �۰ų� �����Ƿ� true
    else
        printf("false\n");

    return 0;
}
