#include <stdio.h>
#include <math.h>    // sqrt�� isnan�� ���� �� ����� ��� ����

int main()
{
    float num1;

    num1 = sqrt(-1.0f);    // -1�� �������� �Ǽ��� ǥ���� �� ����

    if (isnan(num1))       // ���ڰ� �ƴ� ������ �˻�
        printf("nan\n");

    return 0;
}
